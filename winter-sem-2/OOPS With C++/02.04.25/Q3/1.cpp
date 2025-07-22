#include <iostream>
using namespace std;

class Sample {
public:
    int value;

    Sample(int v) : value(v) {}
    Sample(const Sample &s) : value(s.value) {} 

    void display() { cout << "Value: " << value << endl; }
};

int main() {
    Sample obj1(10);
    Sample obj2 = obj1; 
    obj1.display();
    obj2.display();
    return 0;
}