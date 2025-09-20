//Constructor Overloading

#include <iostream>
#include <string>
using namespace std;

class Student {
    public:
    string name;
    string gender;
    int age;
    int roll;
    string Department;

    Student () {
        Department= "Computer Science";
    }

    Student (string name, string gender, int roll){ 
        this->name=name;
        this->gender=gender;
        this->roll=roll;
    }
    
    void getInfo() {
        cout << name << endl;
        cout << gender << endl;
        cout << age << endl;
        cout << roll << endl;
        cout << Department << endl;
    }
};

int main () {
    Student s1("Lakshya","Male",2232);
    s1.age=20;
    s1.Department="Computer Science";
    s1.getInfo();
}