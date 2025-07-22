//Runtime Function Overrding

#include <iostream>
#include <string>
using namespace std;

class Parent{
    public:
    string name;
    string gender;
    int age;
    virtual void disp(string name, string gender, int age){
        cout << name <<endl;
        cout << gender <<endl;
        cout << age <<endl;
    }
};

class Child : public Parent {
    public:
    void disp(string name, string gender, int age) override{
        cout << "The Name Is : " << name << endl;
        cout << "The Gender Is : " << gender << endl;
        cout << "The roll Is : " << age << endl;
    }

};

int main () {
    Child c1;
    Parent p1;
    cout << "+++++ Proper Display +++++" << endl;
    c1.disp("Lakshya","Male",20);
    cout << "+++++ Casual Display +++++" <<endl;
    p1.disp("Lakshya","Male",20);
}