#include <stdio.h>
#include <stdlib.h>

// Stack node structure
struct stack {
    int data;            // data stored in node
    struct stack *next;  // pointer to next node
} *top = NULL;           // top points to top of stack

// Push operation: add element to top of stack
void Push() {
    struct stack *s = (struct stack *)malloc(sizeof(struct stack));
    if (!s) {
        printf("Memory allocation failed.\n");
        return;
    }

    printf("Enter the value to push: ");
    scanf("%d", &s->data);

    s->next = top; // new node points to current top
    top = s;       // update top to new node

    printf("%d pushed onto stack.\n", s->data);
}

// Pop operation: remove element from top of stack
void Pop() {
    if (top == NULL) {
        printf("Stack underflow. Nothing to pop.\n");
        return;
    }

    struct stack *temp = top;
    printf("Popped element: %d\n", temp->data);
    top = top->next; // move top to next element
    free(temp);      // free memory of popped node
}

// Display stack elements from top to bottom
void Display() {
    if (top == NULL) {
        printf("Stack is empty.\n");
        return;
    }

    printf("Stack elements (top to bottom): ");
    struct stack *temp = top;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    int choice;

    while (1) {
        printf("\n--- Stack Menu ---\n");
        printf("1 - Push\n");
        printf("2 - Pop\n");
        printf("3 - Display Stack\n");
        printf("4 - Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                Push();
                break;
            case 2:
                Pop();
                break;
            case 3:
                Display();
                break;
            case 4:
                exit(0);
            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
