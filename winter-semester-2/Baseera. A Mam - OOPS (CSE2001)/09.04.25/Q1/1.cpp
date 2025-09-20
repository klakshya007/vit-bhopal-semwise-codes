#include<iostream>
using namespace std;
template<typename T>
void swapVal(T &a, T &b) { T t = a; a = b; b = t; }

int main() {
    int x=5, y=10; swapVal(x, y);
    cout << x << " " << y;
}
