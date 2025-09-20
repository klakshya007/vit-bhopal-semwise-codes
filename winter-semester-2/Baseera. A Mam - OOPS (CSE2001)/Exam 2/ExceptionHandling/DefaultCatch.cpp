#include <iostream>
using namespace std;

class InvalidAmountError :public runtime_error {
    public :
    InvalidAmountError(const string &msg) : runtime_error(msg) {};
};

class InsufficientBalanceError : public runtime_error {
    public: 
    InsufficientBalanceError(const string &msg) :runtime_error(msg) {};
};

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
        else {throw InvalidAmountError("Amount Should Be Greater Than Zero");}
    }
    void withdraw(int amount)
    {
        if (amount<=balance && amount >0)
        {
            balance=balance-amount;
            cout<< amount<< " Is Debited Successfully"<<endl;
        }
        else if ( amount <0) 
        {throw InvalidAmountError("Amount Should Be Greater Than Zero");}
        else if (amount > balance)
        {throw InsufficientBalanceError("Account Balance Is Low");}
    }
};

int main()
{
    Customer C1("Rohit",5000,10);
    try {
    C1.deposit(100);
    C1.withdraw(6000);
    }
    catch(const InvalidAmountError &e)
    {
        cout << "Exception Occured : " << e.what() <<" With Code : " << &e <<endl;
    }
        catch(const InsufficientBalanceError &e)
    {
        cout << "Exception Occured : "<< e.what() << " With Code : " << &e <<endl;
    }
    catch(...){
        cout << "Exception Occured : " <<endl;
    }

}