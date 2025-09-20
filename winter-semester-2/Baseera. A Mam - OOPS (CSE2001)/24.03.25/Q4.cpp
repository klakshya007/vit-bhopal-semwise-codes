#include <iostream>
using namespace std;

class Student {
public:
    string name;
    float marks;

    Student(string n, float m) : name(n), marks(m) {}
    void displayReport() {
        cout << "Student: " << name << ", Marks: " << marks << endl;
    }
};

int main() {
    Student students[] = {Student("Alice", 85.5), Student("Bob", 78.0)};
    for (Student &s : students) s.displayReport();
    return 0;
}