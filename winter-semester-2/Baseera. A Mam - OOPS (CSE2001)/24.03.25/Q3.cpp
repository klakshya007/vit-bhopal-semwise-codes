#include <iostream>
using namespace std;

class Account {
public:
    string owner;
    double balance;

    Account(string o, double b) : owner(o), balance(b) {}
    void deposit(double amount) { balance += amount; }
    bool withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
            return false;
        }
        balance -= amount;
        return true;
    }
    void display() {
        cout << "Owner: " << owner << ", Balance: " << balance << endl;
    }
};

int main() {
    Account acc("Akhil", 1000);
    acc.deposit(500);
    acc.withdraw(200);
    acc.display();
    return 0;
}