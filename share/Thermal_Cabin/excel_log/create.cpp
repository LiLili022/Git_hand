#include "create.h"
using namespace std;

int main() {
    ifstream log_file(LOG_FILE);
    if (!log_file.is_open()) {
        cout << "main::log_file open fail!" << endl;
        return 0;
    }
    
    GetPortNamesByCabin();
    InitLogFile(log_file);
    GetLogInputsIndex(log_file);
    AddToHFile();
    
    // int n = 1;
    // for (auto i = port_names.begin(); i!=port_names.end(); ++i){
    //     cout << n << "." << *i <<endl;
    //     cout << port_names.size() << endl;
    //     ++n;
    // }
    // cout << endl;
    // for (auto i = input_names.begin(); i!=input_names.end(); ++i){
    //     cout << i->second << "." << i->first <<endl;
    // }

    log_file.close();
    return 0;
}