//Fucntion Overloading
#include <iostream>
#include <string>
using namespace std;

class Student {
    public:
    string name;
    string gender;
    int roll;
    int age;
    string Dept;
    void dispNG(string name, string gender) {
        this->name = name;
        this->gender= gender;
        cout << name <<endl;
        cout << gender <<endl;
        
    }

    void disproll (int roll) {
        this->roll =roll ;
        cout << roll << endl;
    }

};
 
int main() {
    Student s1;
    s1.dispNG("Lakshya", "Male");
    s1.disproll(232);
}