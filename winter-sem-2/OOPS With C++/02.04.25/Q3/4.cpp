#include <iostream>
using namespace std;

class Number {
public:
    int num;

    Number(int n) : num(n) {}
    Number(const Number &n) : num(n.num) {} 

    void display() { cout << "Number: " << num << endl; }
};

int main() {
    Number n1(5);
    Number n2 = n1; 
    n1.display();
    n2.display();
    return 0;
}