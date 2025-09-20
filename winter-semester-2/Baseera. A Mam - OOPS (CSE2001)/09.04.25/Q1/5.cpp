#include<iostream>
using namespace std;
template<typename T>
T minVal(T a, T b) { return (a < b) ? a : b; }

int main() {
    cout << minVal(6, 9);
}
