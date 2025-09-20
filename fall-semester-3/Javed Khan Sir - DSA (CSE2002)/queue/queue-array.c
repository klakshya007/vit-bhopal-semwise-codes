#include <stdlib.h>
#include <stdio.h>

#define max_size 7   // maximum size of the queue

int queue[max_size];
int front = -1;  // points to first element
int rear = -1;   // points to last element

// Check if queue is full
int isfull() {
    return (rear == max_size - 1);
}

// Check if queue is empty
int isempty() {
    return (front == -1 || front > rear);
}

// Insert element at rear
void enqueue(int value) {
    if (isfull()) {
        printf("Queue overflow.\n");
    } else {
        if (front == -1) {   // first insertion
            front = 0;
        }
        rear++;
        queue[rear] = value;
        printf("%d inserted.\n", value);
    }
}

// Delete element from front
int dequeue() {
    if (isempty()) {
        printf("Queue is already empty.\n");
        return -1;
    } else {
        int item = queue[front];
        printf("Dequeued element: %d\n", item);
        front++;             // move front forward
        return item;
    }
}

// Display all elements
void display() {
    if (isempty()) {
        printf("Queue is empty.\n");
    } else {
        printf("Elements of queue are: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\n");
    }
}

// Show the element at front
int peek() {
    if (isempty()) {
        printf("Queue is empty. Cannot peek.\n");
        return -1;
    }
    printf("Front element is: %d\n", queue[front]);
    return queue[front];
}

int main() {
    int choice, value;
    while (1) {
        printf("\n--- Queue Menu ---\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Check if full\n");
        printf("4. Check if empty\n");
        printf("5. Display first element (peek)\n");
        printf("6. Display queue\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                enqueue(value);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                if (isfull())
                    printf("Queue is full.\n");
                else
                    printf("Queue is not full.\n");
                break;

            case 4:
                if (isempty())
                    printf("Queue is empty.\n");
                else
                    printf("Queue is not empty.\n");
                break;

            case 5:
                peek();
                break;

            case 6:
                display();
                break;

            case 7:
                return 0;

            default:
                printf("Invalid choice! Enter a number between 1 to 7.\n");
        }
    }
    return 0;
}
