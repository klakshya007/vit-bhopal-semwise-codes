#include <iostream>
#include <string>
using namespace std;

class Bank {
    private:
    string password;

    public:
    double balance;
    string username;
    string loginID;

    Bank (string username, string loginID, double balance) {
        this->username=username;
        this->loginID=loginID;
        this->balance=balance;
    }

    Bank (Bank &orgObj){
        cout << "I Am A Custom Copy Constructor.";
        this->username=orgObj.username;
        this->balance=orgObj.balance;
        this->loginID=orgObj.loginID;

    }

    void setPassword (string p) {
        password = p;
    }
    string getPassword () {
        return password;
    }

    void getInfo() {
        cout << username << endl;
        cout << loginID << endl;
        cout << balance << endl;
    }
};

int main () {
    Bank b1("klakshya_007", "Lakshya",100);
    b1.setPassword("vulnerable");
    cout << b1.getPassword() << endl;

    b1.getInfo();

    Bank b2(b1);
    b2.getInfo();
}
