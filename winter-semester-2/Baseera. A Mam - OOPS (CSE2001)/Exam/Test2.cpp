#include <iostream>
#include <string>
using namespace std;

class Student {
    public:
    string name;
    double* cgpaPtr;

    Student (string name, double cgpa) {
        this->name=name;
        cgpaPtr = new double;
        *cgpaPtr=cgpa;
    }

    Student (Student &orgObj) {
        this->name=orgObj.name;
        cgpaPtr=new double;
        *cgpaPtr=*orgObj.cgpaPtr;
    }

    void getInfo() {
        cout << name << endl;
        cout << *cgpaPtr << endl;
    }


    //Destructor
    ~Student () {
        cout << "Hi, I Delete Everything";
        delete cgpaPtr;
        
    }
    };

int main () {
    Student s1("neha kumar", 8.9);
    Student s2(s1);
    s1.getInfo();
    s2.name="Rahul Kumar";
    *(s2.cgpaPtr)=9.2;
    s1.getInfo();
    s2.getInfo();

}