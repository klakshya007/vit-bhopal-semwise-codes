#include<iostream>
using namespace std;
template<typename T>
class Stack {
    T a[10]; int top = -1;
public:
    void push(T x) { a[++top] = x; }
    void pop() { top--; }
    T peek() { return a[top]; }
};

int main() {
    Stack<int> s; s.push(5); cout << s.peek();
}
