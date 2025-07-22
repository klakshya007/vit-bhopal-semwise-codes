#include <iostream>
#include <cstring>
using namespace std;

class String {
public:
    char *str;

    String(const char *s) {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }
    String(const String &s) { 
        str = new char[strlen(s.str) + 1];
        strcpy(str, s.str);
    }
    ~String() { delete[] str; }

    void display() { cout << str << endl; }
};

int main() {
    String s1("Hello");
    String s2 = s1; 
    s1.display();
    s2.display();
    return 0;
}