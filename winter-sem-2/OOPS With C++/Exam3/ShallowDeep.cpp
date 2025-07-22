#include <iostream>
#include <string>
using namespace std;    

class Student {
    public:
    string name;
    double* cgpaPtr;

    Student (string name, double cgpa) {
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;}

    Student (Student &arg) {
        cout << "I Am A Custom Copy Constructor" << endl;
        this->name = arg.name;
        cgpaPtr = new double;
        *cgpaPtr = *(arg.cgpaPtr);
    }


    ~Student () {
        cout << "Hi I Am Destructor" << endl;
        delete cgpaPtr;
    }
    void getInfo() {
        cout << "Name: " << name << endl;
        cout << "CGPA: " << *cgpaPtr << endl;
    }
    
};

int main() {
    Student s1("John Doe", 3.75);
    s1.getInfo();

    Student s2(s1);
    *s2.cgpaPtr = 10;
    s1.getInfo();

    return 0;
}