#include <stdio.h>
#include <stdlib.h>

#define MAX 10  // Maximum size of stack

struct Stack {
    int a[MAX];
    int top;
};
typedef struct Stack stk;

// Initialize stack top
void InitTop(stk *stack1) {
    stack1->top = -1;
}

// Push function
void Push(stk *stack1, int d) {
    if (stack1->top >= MAX - 1) {
        printf("Overflow Condition!\n");
        return;
    }
    stack1->a[++stack1->top] = d;
    printf("%d pushed onto stack.\n", d);
}

// Pop function
void Pop(stk *stack1) {
    if (stack1->top == -1) {
        printf("Underflow Condition!\n");
        return;
    }
    printf("Popped element: %d\n", stack1->a[stack1->top--]);
}

// Display stack
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
    int choice, value;

    InitTop(&MyStack);

    do {
        printf("\n--- Stack Menu ---\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to push: ");
                scanf("%d", &value);
                Push(&MyStack, value);
                break;
            case 2:
                Pop(&MyStack);
                break;
            case 3:
                DisplayRev(&MyStack);
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 4);

    return 0;
}
