#include <iostream>
#include <string>
using namespace std;

class Teacher {
    private:
    int salary;
    string username;
    public:
    string name, gender;
    int age;
    void setSalary (int s) {
        salary=s;
    }
    void setUsername (string u) {
        username = u;
    }
    int getSalary () {
        return salary;
    }
    string getUsername() {
        return username;
    }
    Teacher (string name, string gender, int age) {
        this -> name = name ;
        this -> gender = gender ;
        this -> age = age ;
    }
    Teacher (int age, string name , string gender) {
        this -> age = age ;
        this -> name = name ;
        this -> gender = gender ;
    }
    void display () {
        cout << name << endl << gender <<endl << age << endl;
    }
    Teacher (Teacher &arg) {
        cout << "I Am A Custom Copy Constructor" << endl;
        this -> name = arg.name ;
        this -> gender = arg.gender ;
        this -> age = arg.age ;
        this -> username =arg.username;
        this -> salary = arg.salary;
    }
};

int main() {
    Teacher t1("Amit", "Male", 24);
    Teacher t2(25, "Rishika","Female");
    t1.setUsername("AMIT01");
    t1.setSalary(200000);
    t2.setUsername("RISHI01");
    t2.setSalary(300000);
    t1.display();
    cout << t1.getUsername() << endl;
    cout << t1.getSalary() << endl;
    t2.display();
    cout << t2.getUsername() << endl;
    cout << t2.getSalary() << endl;
    Teacher t3(t2);
    t3.display();
    cout << t3.getUsername() << endl;
    cout << t3.getSalary() << endl;
}
