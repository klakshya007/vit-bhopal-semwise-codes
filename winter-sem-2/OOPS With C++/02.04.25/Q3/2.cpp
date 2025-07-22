#include <iostream>
using namespace std;

class Point {
public:
    int x, y;

    Point(int a, int b) : x(a), y(b) {}
    Point(const Point &p) : x(p.x), y(p.y) {} 

    void display() { cout << "Point(" << x << ", " << y << ")" << endl; }
};

int main() {
    Point p1(1, 2);
    Point p2 = p1; 
    p1.display();
    p2.display();
    return 0;
}