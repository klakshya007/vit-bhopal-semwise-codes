#include <iostream>
using namespace std;

class Point3D {
public:
    int x, y, z;

    Point3D(int xCoord, int yCoord, int zCoord) {
        x = xCoord;
        y = yCoord;
        z = zCoord;
    }

    void display() {
        cout << "Point3D coordinates: (" << x << ", " << y << ", " << z << ")" << endl;
    }
};

int main() {
    Point3D point(1, 2, 3);
    point.display();
    return 0;
}