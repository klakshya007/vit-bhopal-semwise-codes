#include <iostream>
#include <set>
using namespace std;

int main() {
    set <int> s;
    s.insert(1);
    s.insert(2);        
    s.insert(30);
    s.insert(4);
    s.insert(5);

    cout << *(s.lower_bound(2)) <<endl;
}