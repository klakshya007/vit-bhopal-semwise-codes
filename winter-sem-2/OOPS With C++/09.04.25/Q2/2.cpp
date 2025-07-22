#include<iostream>
using namespace std;
template<typename T1, typename T2>
class Pair { public: T1 a; T2 b; };

int main() {
    Pair<int, char> p = {1, 'A'};
    cout << p.a << " " << p.b;
}
