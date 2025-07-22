#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    int accountNumber;
    double balance;

public:
    BankAccount(string holder, int number, double initialBalance) {
        accountHolder = holder;
        accountNumber = number;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "\nDeposited: " << amount << "\nNew Balance: " << balance << endl;
        } else {
            cout << "\nInvalid deposit amount." << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "\nWithdrawn: " << amount << "\nRemaining Balance: " << balance << endl;
        } else {
            cout << "\nInsufficient balance or invalid amount." << endl;
        }
    }

    void display() {
        cout << "\nAccount Holder: " << accountHolder;
        cout << "\nAccount Number: " << accountNumber;
        cout << "\nBalance: " << balance << endl;
    }
};

int main() {
    BankAccount acc1("Akhil Yadav", 101, 5000.00);
    BankAccount acc2("Lakshya Kant", 102, 3000.00);

    cout << "\nInitial Account Details:";
    acc1.display();
    acc2.display();

    cout << "\nPerforming Transactions:";
    acc1.deposit(1500);
    acc1.withdraw(2000);
    acc2.withdraw(3500);
    acc2.deposit(1000);

    cout << "\nFinal Account Details:";
    acc1.display();
    acc2.display();

    return 0;
}
