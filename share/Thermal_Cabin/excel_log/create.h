#ifndef CREATE_INITINPUTS_H
#define CREATE_INITINPUTS_H

#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <vector>
#include <list>
#include <map>
#include <algorithm>
#include "../Thermal_Cabin.h"
#define LOG_FILE "../Thermal_Cabin/excel_log/log.csv"
#define OUT_LOG "../Thermal_Cabin/outputs_log/out_log.csv"
#define THERMAL_CABIN "../Thermal_Cabin/Thermal_Cabin.h"
#define Get_Inputs_Value "../Thermal_Cabin/Get_Inputs_Value.h"
using namespace std;

string input_start_keyword = "External inputs";
string input_stop_keyword = "ExtU_Thermal_Cabin_T";
string inputname_start_keyword = "/* '<Root>/";
char inputname_end_keyword = '\'';
string output_start_keyword = "External outputs";
string output_stop_keyword = "ExtY_Thermal_Cabin_T";
string outputname_start_keyword = "_T ";
char outputname_end_keyword = ';';

string log_input_nmae_keyword = ".";
string log_stop_keyword = "[]";

map<string, int> input_names; // storage input signals by Cabin
list<string> port_names;
list<bool> log_input_names_index; // by log.cxv
list<string> log_input_names; // by log.cxv

int inputs_count = 1;
const int DELETE_LINE = 12;

void InitLogFile(ifstream& file) {
    string line;
    for (int i = 1; i <= DELETE_LINE; ++i) {
        getline(file, line);
    }
    return;
}

void GetPortNames(ifstream& cabin_file, string start_keyword, string stop_keyword, 
            string portname_start_keyword, char portname_end_keyword, bool orderly=false){
    string line;
    string input_name;
    bool start_flag = false;
    while(true) {
        if (!getline(cabin_file, line)) {
            cout << "GetPortNames::getline fail!" << endl;
            return;
        }
        
        if(!start_flag){
            auto it = find_end(line.begin(), line.end(), start_keyword.begin(), start_keyword.end());
            if (it==line.end()) {
                continue;
            } else if (it!=line.end()) {
                start_flag = true;
                continue;
            }
        } else {
            auto it = find_end(line.begin(), line.end(), stop_keyword.begin(), stop_keyword.end());
            if (it!=line.end()) {
                cout << "GetPortNames success." << endl;
                return;
            }
            it = find_end(line.begin(), line.end(), portname_start_keyword.begin(), portname_start_keyword.end());
            if (it==line.end()) {
                // cout << line << endl;
                // cout << "Fail line!" << endl;
                continue;
            } else {
                it+=portname_start_keyword.size();
            }
            while(it!=line.end() && *it!=portname_end_keyword){
                input_name+=*it;
                ++it;
            }
            if (orderly) {
                port_names.push_back(input_name);
            } else {
                input_names.insert(pair<string, int>(input_name, inputs_count));
            }
            input_name = "";
            ++inputs_count;
        }
    }
}

void GetPortNamesByCabin(){
    ifstream cabin_file(THERMAL_CABIN);
    if (!cabin_file.is_open()) {
        cout << "cabin_file open fail!" << endl;
        return;
    }

    GetPortNames(cabin_file, input_start_keyword, input_stop_keyword, inputname_start_keyword, inputname_end_keyword);
    GetPortNames(cabin_file, output_start_keyword, output_stop_keyword, outputname_start_keyword, outputname_end_keyword, true);

    cabin_file.close();
    return;
}

string GetRealLogInputName(string input_name) {
    auto position = input_name.find(".");
    auto it = find_first_of(input_name.begin(), input_name.end(), log_stop_keyword.begin(), log_stop_keyword.end());
    if (input_name[it - input_name.begin() - 1] == '1') {
        return input_name.substr(position+1, (it - input_name.begin() - position - 1));
    } else if (input_name[it - input_name.begin() - 1] >= '0' && input_name[it - input_name.begin() - 1] <= '9') {
        return input_name.substr(position+1, (it - input_name.begin() - position - 2));
    } else {
        return input_name.substr(position+1, (it - input_name.begin() - position - 1));
    }   
}

void GetLogInputsIndex(ifstream& file) {
    string line;
    if (!getline(file, line)) {
        cout << "GetLogInputsIndex::getline fail!" << endl;
        return;
    }

    string input_name;
    int count = 1; // temp
    for (int i = 0; i<= line.size(); ++i) {
        if (line[i] == ',' || i==line.size()) {
            // cout << input_name << endl;
            input_name = GetRealLogInputName(input_name);
            auto it = input_names.find(input_name);
            if (it == input_names.end()) {
                cout<< count << "." << input_name << " not input signal!" << endl;
                log_input_names_index.push_back(false);
            } else {
                cout<< count << ".find_out : " << it->first << "   " << it->second <<endl;
                log_input_names_index.push_back(true);
                log_input_names.push_back(input_name);
            }
            cout << endl;
            ++count;
            input_name = "";
            continue;
        }
        input_name += line[i];
    }
    
    cout << "GetLogInputsIndex success." << endl;
    return;
}

void SetInputsValue(ofstream& h_file){
    h_file << "static void SetInputsValue(ExtU_Thermal_Cabin_T& Thermal_Cabin_U) {\n";

    for (auto it = input_names.begin(); it != input_names.end(); ++it) {
        h_file <<"\tThermal_Cabin_U."<<it->first <<" = 0;\n";
    }

    auto name_it = log_input_names.begin();
    int single_num = 0;
    for (auto it = log_input_names_index.begin(); it != log_input_names_index.end(); ++it){
        if (!*it) {
            ++single_num;
            continue;
        }

        h_file <<"\tThermal_Cabin_U."<<*name_it <<" = single_list["<< single_num <<"];\n";
        ++name_it;
        ++single_num;
    }
    h_file << "\tsingle_list.clear();\n";
	h_file << "\tuint_list.clear();\n";
    h_file << "}\n";
}

void GetOutputsValue(ofstream& h_file){
    h_file << "static void GetOutputsValue(ExtY_Thermal_Cabin_T& Thermal_Cabin_Y) {\n";
    h_file << "\tout_file.open(OUT_FILE, ios_base::app);\n";
    h_file << "\tif (!out_file.is_open()) { cout << \"InitLogFile::out_file open fail!\" << endl; return; }\n";

    ofstream out_log(OUT_LOG);
    if (!out_log.is_open()) {
        cout << "out_log open fail!" << endl;
        return;
    }

    for (auto it = port_names.begin(); it!=port_names.end(); ++it){
        auto num_1 = int(it->find('['));
        if (num_1 >= 0) {
            auto num_2 = int(it->find(']'));
            auto size = stoi(it->substr(num_1+1, (num_2-num_1-1)));
            for (int i=0; i<size; ++i){
                out_log << it->substr(0, num_1) << "[" << i << "],";
                // h_file << "\tif (!Thermal_Cabin_Y." << it->substr(0, num_1) << "[" << i << "]" << ") out_file << \"0,\"; else out_file << Thermal_Cabin_Y." 
                //     << it->substr(0, num_1) << "[" << i << "]" << " << \",\";\n";
                h_file << "\tout_file << to_string(Thermal_Cabin_Y." << it->substr(0, num_1) << "[" << i << "]" << ") << \",\";\n";
            }
        } else {
            out_log << *it << ",";
            // h_file << "\tif (!Thermal_Cabin_Y." << *it << ") out_file << \"0,\"; else out_file << Thermal_Cabin_Y." << *it << " << \",\";\n";
            h_file << "\tout_file << to_string(Thermal_Cabin_Y." << *it << ") << \",\";\n";
        }
    }
    out_log.close();

    h_file << "\tout_file << \"\\n\";\n";
    h_file << "\tout_file.close();\n";
    h_file << "}\n";
}

void AddToHFile(){
    ofstream h_file(Get_Inputs_Value);
    if (!h_file.is_open()) {
        cout <<"AddToHFile::!h_file.is_open()" <<endl;
        return;
    }

    h_file << "#include \"../Thermal_Cabin/excel_log/Copy_Base.h\"\nusing namespace std;\n";
    SetInputsValue(h_file);
    GetOutputsValue(h_file);

    h_file.close();
}

#endif // CREATE_INITINPUTS_H