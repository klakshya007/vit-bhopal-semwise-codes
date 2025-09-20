#include <iostream>
#include <string>
using namespace std;

class Account {
    private :
    float balance;
    string username, password;
    public:
    string name, acctype;
    int accNumber;
    float initialbalance;

    Account() {
        acctype="Savings Account";
        cout << "Hi, I am a user-defined constructor!"<<endl;
    }
    void setInitial (float i){
    initialbalance = i;
    balance=initialbalance;}

    float getBal() {
        return balance;
    }

    void deposit(float d) {
        balance = balance+d;
    }

    void withdraw(float w) {
        balance = balance-w;
    }

    void getUsername (){
        cout << "Emter Username : " <<endl;
        cin >> username;
    }

    void getPassword (){
        cout << "Enter Password : " <<endl;
        cin >> password;
    }

};

int main() {
    Account a1;
    Account a2;

    a1.getUsername();
    a1.getPassword();
    a1.name = "Lakshya";
    a1.accNumber= 1223423;
    a1.setInitial(70000);

    cout << a1.name <<endl;
    cout << a1.accNumber <<endl;
    cout << a1.initialbalance <<endl;
    cout << a1.acctype <<endl ;

    cout << a1.getBal() <<endl;
    a1.deposit(100.2);
    cout << a1.getBal() <<endl;
    a1.withdraw(1000);
    cout << a1.getBal() <<endl;

}