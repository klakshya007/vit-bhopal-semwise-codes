#include <iostream>
#include <vector>
using namespace std;
 
int main () {
    vector <int> vic = {1,2,3,4,5};
    vic.push_back(1);
    vic.push_back(2);
    vic.push_back(3);
    vic.push_back(4);
    vic.push_back(5);
    vic.pop_back();

    for (int val : vic) {
        cout << val << " ";
    }
    
    cout << endl;
    
    vector <float> vec(4,23.233231);
    for (float val : vec) {
        cout << val << " ";
    }
    
    cout << endl;
    vector <int> vec1 = {1,2,3,4,5};
    vector <int> vec2(vec1);
    for (int val : vec2) {
        cout << val << " ";
    }
    cout << endl;
    cout << vic.size() <<endl;
    cout << vic.capacity() << endl;

    cout << "Value At Index 2: " << vic[2]<< endl;
    cout << "Value At First Index : " << vic.front()<< endl;
    return 0;
}