#include <iostream>
#include <string>
using namespace std;

class Person {
    public :
    string name;
    string gender;
    int age;
};

class Student : public Person {
    public:
    int roll;
    int year;
};

class Grad : public Student {
    public :
    string research;
};

int main() {
    Grad g1;
    g1.name="Lakshya";
    g1.gender="Male";
    g1.age=20;
    g1.roll=2323;
    g1.year=2024;
    g1.research="Nuclear Physics";
    return 0;
}