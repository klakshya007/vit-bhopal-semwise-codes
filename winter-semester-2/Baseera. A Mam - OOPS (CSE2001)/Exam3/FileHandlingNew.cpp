#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

int main() {
    int n;
    vector <int> arr[5];
    for (int i=0;i<5; i++) {
        cin>>n;
        arr[i].push_back(n);
    }

    ofstream fout;
    fout.open("vector.txt");
    for (int i=0;i<5;i++) {
        fout << ;
    }
    fout.close();
}