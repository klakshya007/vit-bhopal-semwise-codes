#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> vec1 = {1,2,3,4,5};
    vector <int> vec(vec1);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.emplace_back(6);
    vec.pop_back();
    vec.erase(vec.begin()+3);
    vec.insert(vec.begin()+2,100);
    cout << "Vector At Index 2 : "<<  vec.at(2) <<endl;
    cout << "Vector At Index 2 : "<<  vec[2] <<endl;
    vec.clear();
    cout << "Vector Size : " <<vec.size()<<endl;
    cout << "Vector Capacity : " << vec.capacity()<<endl;
    for (int val :vec) {
        cout << val << " ";
    }
    cout << endl;
    cout << "Front Element : " << vec.front()<<endl;
    cout << "Back Element : " << vec.back()<<endl;
    return 0;
}