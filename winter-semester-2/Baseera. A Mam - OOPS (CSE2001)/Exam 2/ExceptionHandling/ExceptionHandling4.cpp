#include <iostream>
using namespace std; 

int main () {
    try {
        int *p = new int [100000000000000000];
        cout << "Memory Allocation is Successful";
        delete []p;
    }
    catch( const exception &e) {
        cout << "Exception Occured Error Code : " << &e << endl << e.what() <<endl;
    }
}
