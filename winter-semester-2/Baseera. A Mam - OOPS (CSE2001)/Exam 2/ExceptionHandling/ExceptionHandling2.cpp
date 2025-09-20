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
        if (amount<=0) 
        {
            throw "Amount Should Be Greater Than Zero";}
            
            balance=balance+amount;
            cout << "Amount Is Credited Successfully"<<endl;
        
        
    }
    void withdraw(int amount)
    {
        if (amount <0)
        {
            throw "Amount Should Be Greater Than Zero";
        }
        else if (amount > balance)
        {throw "Account Balance Is Low";}
        balance=balance-amount;
        cout<< amount<< " Is Debited Successfully"<<endl;
    }
};

int main()
{
    Customer C1("Rohit",5000,10);
    try {
    C1.deposit(-11);
    C1.withdraw(3000);
    }
    catch(const char *e)
    {
        cout << "Exception Occured: " << e<<endl;
    }

}