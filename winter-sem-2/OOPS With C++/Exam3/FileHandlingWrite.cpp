#include<iostream>
#include<fstream>
using namespace std;

int main() {
    //Open
    ofstream fout;
    fout.open("zoom.txt");
    //Write
    fout << "Hello, Zoom";

    fout.close();
}