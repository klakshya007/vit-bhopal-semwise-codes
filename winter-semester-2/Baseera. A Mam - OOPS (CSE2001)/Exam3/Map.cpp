#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;


int main() {
    map <string, int> m;
    m["TV"] =1000;
    m["AC"] = 2000;
    m["Washing Machine"] = 3000;    

    m.insert({"Refrigerator", 4000});
    for (auto val : m){
        cout << val.first << " : " << val.second << endl;}
    
    
    if(m.find("AC") != m.end()) {
        cout << "Found" <<endl;}
    else {cout<< "Not Found" << endl;}
    
    } 