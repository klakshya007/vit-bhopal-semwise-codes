//Program To Implement Case Statement

#include <iostream>
using namespace std;

int main() 
{
    cout << "DATE: 10.02.25, Time: 9:48 AM, NAME: Lakshya Kant\n";
    int choice; 
    cout << "Enter A Choice: ";
    cin >> choice;
    if (choice==1) {cout << "You Chose Option 1!\n";}
    else if (choice==2) {cout << "You Chose Option 2!\n";}
    else if (choice==3) {cout << "You Chose Option 3!\n";}
    else if (choice==4) {cout << "You Chose Option 4!\n";}
    else {cout << "Invalid Choice\n";}
    return 0;
}
