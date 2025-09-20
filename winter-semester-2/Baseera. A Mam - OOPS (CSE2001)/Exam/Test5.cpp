//Multiple Inheritance
#include <iostream>
#include <string>
using namespace std;

class Student {
    public:
    string name;
    string gender;
};

class Teacher {
    public:
    string TeacherID;
    int salary;
};

class TeachingAssistant :public Teacher , public Student {
    public:
    int age;
    string Department;
    void getInfo () {
        cout << name << endl;
        cout << gender << endl;
        cout << TeacherID<< endl;
        cout << salary<< endl;
        cout << age << endl;
        cout << Department << endl;
    }

    
};

int main (){
    TeachingAssistant tone;
    tone.name="Tony Stark";
    tone.gender="Male";
    tone.TeacherID="2423";
    tone.salary=9000000;
    tone.age=20;
    tone.Department="Nuclear Physics";
    tone.getInfo();
    return 0;
}


