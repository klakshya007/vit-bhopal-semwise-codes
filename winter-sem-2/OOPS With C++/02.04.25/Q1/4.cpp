#include <iostream>
using namespace std;

class Point {
public:
    int x, y;

    Point() {
        x = 0;
        y = 0;
        cout << "Point created at (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point p; 
    return 0;
}