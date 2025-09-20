#include <iostream>
using namespace std;

class Simple {
public:
    Simple() {
        cout << "Constructor called!" << endl;
    }
};

int main() {
    Simple obj; 
    return 0;
}