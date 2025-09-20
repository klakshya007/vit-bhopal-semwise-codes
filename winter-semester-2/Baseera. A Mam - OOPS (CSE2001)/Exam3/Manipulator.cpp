#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;    

int main() {
    cout << setw(10) << "Hello" << endl;
    cout << setfill('*') << setw(10) << "World" << endl;
    cout << setprecision(4) << 2.555555555 << endl;
    cout << setiosflags(ios::hex) << "The Hexadecimal Value Of 84 Is : " << 84 << endl ;
}