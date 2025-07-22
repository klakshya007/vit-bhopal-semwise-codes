#include <iostream>
using namespace std;

class Customer
{ 
    string name;
    int balance, account_number;

    public:
    Customer(string name, int balance, int account_number)
    {
        this->name=name;
        this->balance=balance;
        this->account_number=account_number;
    };

    void deposit(int amount)
    { 
        if (amount>0) 
        {
            cout << "Amount Is Credited Successfully"<<endl;
            balance=balance+amount;
        }
        else {throw runtime_error("Amount Should Be Greater Than Zero");}
    }
    void withdraw(int amount)
    {
        if (amount<=balance && amount >0)
        {
            balance=balance-amount;
            cout<< amount<< " Is Debited Successfully"<<endl;
        }
        else if ( amount <0) 
        {throw runtime_error("Amount Should Be Greater Than Zero");}
        else if (amount > balance)
        {throw runtime_error("Account Balance Is Low");}
    }
};

int main()
{
    Customer C1("Rohit",5000,10);
    try {
    C1.deposit(-11);
    C1.withdraw(12000);
    }
    catch(const runtime_error &e)
    {
        cout << "Exception Occured : " << e.what() <<" With Code : " << &e <<endl;
    }

}