#include <iostream>
#include <string>
using namespace std;

class Teacher {
    //Acess Specifier
    private:
    float salary;
    public :
    // Attributes
    string name,subject,department;
    int id;
    //Methods
    void changedept(string newDept){
        department = newDept;
    }
    //Setter
    void setSalary(double s){
        salary=s;
    }
    //Getter
    double getSalary() {
        return salary;
    }
};

class Student {
    public :
    string name;
    int roll, age;
};

int main (){
    Teacher T1;
    T1.name = "Singh";
    T1.subject = "CPP";
    T1.department = "SCOPE";
    T1.id = 12345;
    T1.setSalary(70000);

    cout << T1.name << endl;
    cout << T1.subject << endl;
    cout << T1.department << endl;
    cout << T1.id << endl;
    cout << T1.getSalary() <<endl;

    return 0;
}