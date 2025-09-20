#include<iostream>
using namespace std;
template<typename T>
void print(T a[], int n) { for(int i=0;i<n;i++) cout<<a[i]<<" "; }

int main() {
    int a[3]={1,2,3}; print(a,3);
}
