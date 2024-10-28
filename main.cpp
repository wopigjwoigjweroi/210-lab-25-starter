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



int main() {
    

    return 0;
}

/* syntax examples:
auto start = high_resolution_clock::now()
auto end = high_resolution_clock::now()
auto duration = duration_cast<milliseconds>(end - start)
duration.count() references elapsed milliseconds
*/
