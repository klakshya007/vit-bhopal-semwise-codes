#include <iostream>
using namespace std;

class Complex {
    int real;
    int imag;
    public: 
    Complex (int r = 0, int i = 0) {
        real = r;
        imag = i;
    }
    void print(){
        cout << real << "+" <<imag<< "i" <<endl;
    }
    Complex operator + (const Complex& c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};

int main() {
    Complex c1(10,5);
    Complex c2(2,3);
    Complex c3 = c1 + c2; 
    c3.print();
}