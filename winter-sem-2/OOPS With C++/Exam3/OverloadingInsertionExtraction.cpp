#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

class Student {
    string name;
    int age;
    public:
    friend ifstream& operator>>(istream &in, Student &s) {
        cout << "Enter name: ";
        in >> s.name;
        cout << "Enter age: ";
        in >> s.age;
    }
    friend ofstream& operator << (ostream &out , Student &s) {
        out << "Name: " << s.name << endl;
        out << "Age: " << s.age << endl;
    }

};

int main() {
    Student s;
    cin >> s;
    cout << s;
    getch();
    return 0;
}