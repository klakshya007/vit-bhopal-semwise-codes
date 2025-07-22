#include <iostream>
using namespace std;

class Rectangle {
public:
    int width, height;

    Rectangle() {
        width = 5;
        height = 10;
        cout << "Rectangle created with width: " << width << " and height: " << height << endl;
    }
};

int main() {
    Rectangle rect;
    return 0;
}