#include<iostream>
using namespace std;
template<typename T>
T maxVal(T a, T b) { return (a > b) ? a : b; }

int main() {
    cout << maxVal(3, 7);
}
