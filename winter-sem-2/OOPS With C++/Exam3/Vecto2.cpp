#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector < int > vec = {1,2,3,4,5,6,7,8,9,10};
    vec.erase(vec.begin()+2);
    vec.erase(vec.begin()+1,vec.end()-1);

    vec.insert(vec.begin()+1, 100); 
    
    for (int val : vec) {
        cout << val << " ";
    }
    cout << endl;


    cout << *(vec.end()-1);

    cout << endl;
    cout << vec.empty() << endl;
    vec.clear();
    cout << vec.empty();
}