#include <iostream>
#include <fstream>
#include <string>
#include <list>
#include <vector>
#define LOG_FILE "../Thermal_Cabin/excel_log/log.csv" // "./excel_log/in_log.csv"
#define OUT_FILE "../Thermal_Cabin/outputs_log/out_log.csv"
using namespace std;

const int DELETE_LINE = 13;
static list<bool> log_input_values_index; // bool isIntType, int index
static vector<int> uint_list;      // storage uint_type log in log.csv
static vector<float> single_list;  // storage single_type log in log.csv

static ifstream file(LOG_FILE);
static ofstream out_file;

static int test_num = 1;

static void InitLogFile() {
    string line;
    for (int i = 1; i <= DELETE_LINE; ++i) {
        getline(file, line);
    }

    ifstream copy_out_file(OUT_FILE);
    if (!copy_out_file.is_open()) {
        cout << "InitLogFile::copy_out_file open fail!" << endl;
        return;
    }
    getline(copy_out_file, line);
    copy_out_file.close();

    out_file.open(OUT_FILE);
    if (!out_file.is_open()) {
        cout << "InitLogFile::out_file open fail!" << endl;
        return;
    }
    out_file << line << "\n";
    out_file.close();
    return;
}

static void GetInputsValue() {
    string line;
    if (!getline(file, line)) {
        return;
    }
    string num_s;
    for (int i = 0; i<= line.size(); ++i) {
        if (line[i] == ',' || i==line.size()) { // && int(num_s.find(".")) >= 0
            single_list.push_back(atof(num_s.c_str()));
        } else {
            num_s += line[i];
            continue;
        }
        num_s = "";
    }
}
