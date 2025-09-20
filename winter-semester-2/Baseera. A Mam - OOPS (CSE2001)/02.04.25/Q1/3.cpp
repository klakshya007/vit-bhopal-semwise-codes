#include <iostream>
using namespace std;

class Circle {
public:
    float radius;

    Circle() : radius(1.0) { 
        cout << "Circle created with radius: " << radius << endl;
    }
};

int main() {
    Circle c; 
    return 0;
}