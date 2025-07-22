#include <iostream>
#include <string>
using namespace std;

int main() {
    try {
        int a,b ;
        cout << "Enter Two Numbers: ";
        cin >> a >> b;
        if (b == 0) {
            throw (b);
        }
    }
    catch (int c) {
        cout << "Divison By : " << c << endl;
    }
}