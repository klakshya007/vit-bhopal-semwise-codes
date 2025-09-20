#include <iostream>
using namespace std;

class Car {
public:
    string model;

    Car() {
        model = "Toyota";
        cout << "Car model: " << model << endl;
    }
};

int main() {
    Car myCar; 
    return 0;
}