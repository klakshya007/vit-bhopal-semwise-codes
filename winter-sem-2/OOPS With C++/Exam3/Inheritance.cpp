#include <iostream>
#include <string>
using namespace std;    

class Person {
    public:
    int age;
    string username;
    
    Person (string username, int age) {
        this->username = username;
        this->age = age;
    }
    
};

class Student : public Person {
    public:
    int rollNumber;

    Student (string username, int age, int rollNumber) : Person(username, age) {
        this->rollNumber = rollNumber;
    }

    void getInfo() {
        cout << "Username: " << username << endl;
        cout << "Roll Number: " << age << endl;
        cout << "Age: " << rollNumber << endl;
    }
};

int main () {
    Student s1("john_doe", 20, 101);
    s1.getInfo();

}