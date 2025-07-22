#include <iostream>
#include <cstdlib> // for exit()
using namespace std;

class Student {
private:
    string name;
    int roll_no;
    int age;
    string grade;

public:
    void set_name(string n) {
        if (n.empty()) {
            cout << "Invalid Entry: Name cannot be empty. Terminating..." << endl;
            exit(0);
        } else {
            name = n;
        }
    }

    void set_roll(int r) {
        if (r <= 0) {
            cout << "Invalid Entry: Roll number must be positive. Terminating..." << endl;
            exit(0);
        } else {
            roll_no = r;
        }
    }

    void set_age(int a) {
        if (a <= 0) {
            cout << "Invalid Entry: Age must be positive. Terminating..." << endl;
            exit(0);
        } else {
            age = a;
        }
    }

    void set_grade(string g) {
        if (g.empty()) {
            cout << "Invalid Entry: Grade cannot be empty. Terminating..." << endl;
            exit(0);
        } else {
            grade = g;
        }
    }

    string get_name(int n)
    {if (n==123) {return name;} else {exit(0);}}
    int get_roll() { return roll_no; }
    int get_age() { return age; }
    string get_grade() { return grade; }
};

int main() {
    Student s;
    
    string name, grade;
    int roll, age;

    cout << "Enter name: ";
    getline(cin, name);  // Supports full names
    s.set_name(name);

    cout << "Enter roll number: ";
    cin >> roll;
    s.set_roll(roll);

    cout << "Enter age: ";
    cin >> age;
    s.set_age(age);

    cin.ignore(); // to consume newline left by cin
    cout << "Enter grade: ";
    getline(cin, grade);
    s.set_grade(grade);

    cout << "\n--- Student Details ---" << endl;
    cout << "Name: " << s.get_name(123) << endl;
    cout << "Roll No: " << s.get_roll() << endl;
    cout << "Age: " << s.get_age() << endl;
    cout << "Grade: " << s.get_grade() << endl;

    return 0;
}
