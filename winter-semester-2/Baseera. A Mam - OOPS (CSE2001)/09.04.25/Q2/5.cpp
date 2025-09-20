#include<iostream>
using namespace std;
template<typename T>
class MyArray {
public:
    T a[3];
};

int main() {
    MyArray<int> arr;
    arr.a[0] = 10;
    cout << arr.a[0];
}
