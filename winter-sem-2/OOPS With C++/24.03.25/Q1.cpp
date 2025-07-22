#include <iostream>
using namespace std;

class Emp {
private:
    string name;
    float basic, da, hra, pf, tds, gross, net;

public:
    void get() {
        cout << "Enter Employee Name: ";
        cin >> name;
        cout << "Enter Basic Salary: ";
        cin >> basic;
        
        da = 0.10 * basic; 
        hra = 0.20 * basic; 
        pf = 0.08 * basic; 
        tds = 0.05 * basic; 
        
        gross = basic + da + hra;
        net = gross - (pf + tds);
    }
    
    void put() {
        cout << "\nEmployee Salary Details";
        cout << "\nName: " << name;
        cout << "\nBasic Salary: " << basic;
        cout << "\nDA: " << da;
        cout << "\nHRA: " << hra;
        cout << "\nGross Pay: " << gross;
        cout << "\nPF: " << pf;
        cout << "\nTDS: " << tds;
        cout << "\nNet Pay: " << net << endl;
    }
};

int main() {
    Emp e;
    e.get();
    e.put();
    return 0;
}
