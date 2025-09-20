#include <stdio.h>
#include <stdlib.h>

#define MAX 10  // Maximum size of stack

// Stack structure
struct Stack {
    int a[MAX];  // array to store elements
    int top;     // index of the top element
};
typedef struct Stack stk;

// Initialize stack top
void InitTop(stk *stack1) {
    stack1->top = -1;  // -1 indicates stack is empty
}

// Push function: adds an element to top of stack
void Push(stk *stack1, int d) {
    if (stack1->top >= MAX - 1) {
        printf("Overflow Condition!\n");  // stack full
        return;
    }
    stack1->top++;
    stack1->a[stack1->top] = d;
}

// Pop function: removes element from top of stack
void Pop(stk *stack1) {
    if (stack1->top == -1) {
        printf("Underflow Condition!\n");  // stack empty
        return;
    }
    printf("Popped element: %d\n", stack1->a[stack1->top]);
    stack1->top--;
}

// Display stack elements from top to bottom
void DisplayRev(stk *stack1) {
    if (stack1->top == -1) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack elements (top to bottom): ");
    for (int i = stack1->top; i >= 0; i--) {
        printf("%d ", stack1->a[i]);
    }
    printf("\n");
}

int main() {
    stk MyStack;
    int m;
    InitTop(&MyStack);

    // Push elements
    for (int i = 0; i < 10; i++) {
        printf("Enter the element you want to push: ");
        scanf("%d", &m);
        Push(&MyStack, m);
    }

    // Display stack
    DisplayRev(&MyStack);

    // Pop an element
    Pop(&MyStack);

    // Display stack again
    DisplayRev(&MyStack);

    return 0;
}
