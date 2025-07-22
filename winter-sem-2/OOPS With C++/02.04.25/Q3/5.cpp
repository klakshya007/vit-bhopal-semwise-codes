#include <iostream>
using namespace std;

class Data {
public:
    int value;

    Data(int v) : value(v) {}
    Data(const Data &d) : value(d.value) {}

    void show() { cout << "Data: " << value << endl; }
};

int main() {
    Data d1(100);
    Data d2 = d1; 
    d1.show();
    d2.show();
    return 0;
}