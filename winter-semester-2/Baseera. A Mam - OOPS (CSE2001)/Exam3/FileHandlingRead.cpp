#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin;
    fin.open("zoom.txt");
    char c;
    c=fin.get();
    while(!fin.eof()) {
        cout << fin.getline();
        c=fin.get();
    }
    fin.close();
}