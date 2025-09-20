#include <iostream>
#include <array>
#include <vector>
#include <algorithm>
using namespace std;    

bool comparator(pair <int , int> p1, pair <int, int> p2) {
    if (p1.second < p2.second) {
        return true; }
    else if (p1.second == p2.second  ) {
        if (p1.first < p2.first) {
        return true;} }
        
    else {return false;}
    }
bool compartor2( int a, int b) {
    if (a > b) {return true; }
    else {return false;}
}
int main() {

    int arr[5] = {1, 3, 2, 4, 5};
    sort(arr,arr+5,compartor2);
    for (int i=0; i < 5; i++) {
        cout << arr[i] << " ";
    }
}