//INHERITANCE
#include <iostream>
#include <string>
using namespace std;


class Person {
    public:
    string name;
    int age;

    Person(string name, int age) {
        this->name=name;
        this->age=age;
    }


};

class Student : public Person {
    public :
    int roll;
    void getInfo( ) {
        cout << name << endl;
        cout << age << endl;
        cout << roll << endl;
    }
    Student (string name, int age, int roll) : Person (name,age) {
        this-> roll = roll;
        cout << "Child Constructor\n";
    }

};

int main() {
    Student s1("Rahul", 20,2423);
    s1.name="Rahul";
    s1.age=20;
    s1.roll=2423;
    s1.getInfo();
    return 0;
}