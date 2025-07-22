#include <iostream>
#include <fstream>
using namespace std;

int main() {
    char data[100];
    ofstream fout;
    fout.open("WhatMamTaught.txt");
    cout << "Writing To The File" << endl;
    cout << "Enter Your Name: ";
    cin >> data;
    fout << data << endl;
    cout << "Enter Your Age: ";
    cin >> data;    
    fout << data << endl;
    fout.close();
    ifstream fin;
    fin.open("WhatMamTaught.txt");
    cout << "Reading From The File" << endl;
    fin >> data;
    cout << "Your Name: " << data << endl;
    fin >> data;
    cout << "Your Age: " << data << endl;
    fin.close();
    return 0;
}