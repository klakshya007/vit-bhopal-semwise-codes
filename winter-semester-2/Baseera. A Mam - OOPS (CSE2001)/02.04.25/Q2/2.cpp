#include <iostream>
using namespace std;

class Box {
public:
    int length, width, height;

    Box(int l, int w = 5, int h = 5) {
        length = l;
        width = w;
        height = h;
    }

    void display() {
        cout << "Length: " << length << ", Width: " << width << ", Height: " << height << endl;
    }
};

int main() {
    Box box1(10);
    Box box2(10, 20);
    box1.display();
    box2.display();
    return 0;
}