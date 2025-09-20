#include <iostream>
#include <exception>
using namespace std;

class DivideByZeroException : public exception {
    public :
    const char* what () const noexcept override {
        return "Division by zero is not allowed.";
    }
};

int main () {
    try {
        int a,b;
        cout << "Enter Two Integers: ";
        cin >> a >> b;
        if (b==0) {
            throw DivideByZeroException();
        }
        else {
            cout << "Result: " << a / b << endl;
        }}
        catch (const DivideByZeroException& e) {
            cout << "Error: " << e.what() << endl;
        }
    
}