#include <iostream>
using namespace std; 
 
int main()
{
    int a ,b;
    cin >> a >>b;
    try{
        if (b==0) {
            throw " Divide By Zero Isn't Possible";
        }
        int c=a/b;
        cout << c << "Is The Result" << endl;
    }
    catch (const char *e ) {
         cout << "Exception Occured : " << e << endl;
    }
    
}