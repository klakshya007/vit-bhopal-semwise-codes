#include <iostream>
using namespace std;

class Circle {
public:
    float radius;

    Circle(float r) {
        radius = r;
    }

    void display() {
        cout << "Circle radius: " << radius << endl;
    }
};

int main() {
    Circle c(5.5);
    c.display();
    return 0;
}