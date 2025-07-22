#include<iostream>
using namespace std;
template<typename T>
class Box { public: T val; };

int main() {
    Box<int> b; b.val = 10;
    cout << b.val;
}
