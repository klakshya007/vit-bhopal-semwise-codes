#include <iostream>
#include <stack>
using namespace std;

int main () {
    stack < int > s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    stack <int> s2;
    s2.push(1);
    s2.push(2);
    
    s.swap(s2);

    while (s.empty()=1) {
        cout << s.top() <<endl;
        s.pop();
    }

    while (!s2.empty()=1) {
        cout << s2.top() <<endl;
        s2.pop();
    }
      
        
    
    cout << s.top() <<endl;

    s.pop();

    cout << s.top() <<endl;
    cout << s.size() << endl;
    cout << s.empty() << endl;
      
}