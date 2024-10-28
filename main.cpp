#include <iostream>
#include <fstream>
#include <chrono>
#include <list>
#include <set>
#include <string>
#include <vector> 
#include <iomanip>

using namespace std;
using namespace std::chrono; 

const string FILE = "codes.txt"; 

void load_data(const string& filename, vector<string>& v, list<string>& l, set<string> s); 
void preform_op(const vector<string> &v, const list<string> &l, const set<string> &s); 

void load_data(const string& filename, vector<string>& v, list<string>& l, set<string> s) {

    fstream file("codes.txt");

    string s; 

    auto start = high_resolution_clock::now(); 

    while (getline(file, s)) {

        v.push_back(s); 
    }

    auto end = high_resolution_clock::now(); 

    auto v_duration = duration_cast<milliseconds>(end - start);

    cout << "Read - Vector: " << v_duration.count() << "ms\n"; 

    file.clear();

    file.seekg(0); 

    start = high_resolution_clock::now(); 

    while (getline(file, s)) {

        l.push_back(s);
    }

    end = high_resolution_clock::now(); 

    auto l_duration = duration_cast<milliseconds>(end - start);

    cout << "Read - List: " << l_duration.count() << "ms\n"; 

    file.clear(); 

    file.seekg(0); 

    start = high_resolution_clock::now(); 

    while (getline(file, s)) {

        s.insert(s);
    }

    end = high_resolution_clock::now(); 

    auto s_duration = duration_cast<milliseconds>(end - start); 

    cout << "Read - Set: " << s_duration.count() << "ms\n"; 

    file.close(); 
}

int main() {
    

    return 0;
}

/* syntax examples:
auto start = high_resolution_clock::now()
auto end = high_resolution_clock::now()
auto duration = duration_cast<milliseconds>(end - start)
duration.count() references elapsed milliseconds
*/
