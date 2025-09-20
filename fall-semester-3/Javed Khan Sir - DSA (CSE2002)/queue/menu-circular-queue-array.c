#include <stdlib.h>
#include <stdio.h>
#define Max_size 5   // maximum size of circular queue

int queue[Max_size];
int rear = -1;
int front = -1;

// Insert element at end
void enqueue(int value) {
    if ((rear + 1) % Max_size == front) {   // queue full condition
        printf("\nQueue is full.\n");
        return;
    }
    if (front == -1) {                      // first insertion
        front = rear = 0;
    } else {
        rear = (rear + 1) % Max_size;       // move rear circularly
    }
    queue[rear] = value;
    printf("%d inserted at end.\n", value);
}

// Insert element at beginning
void enqueueAtBeg(int value) {
    if ((rear + 1) % Max_size == front) {   // queue full condition
        printf("\nQueue is full.\n");
        return;
    }
    if (front == -1) {                      // first insertion
        front = rear = 0;
    } else {
        front = (front - 1 + Max_size) % Max_size; // move front circularly backward
    }
    queue[front] = value;
    printf("%d inserted at beginning.\n", value);
}

// Delete element from front
void dequeue() {
    if (front == -1) {                       // empty queue
        printf("\nQueue is empty. Nothing to delete.\n");
        return;
    }
    printf("\nThe element deleted is: %d\n", queue[front]);
    if (front == rear) {                     // single element case
        front = rear = -1;
    } else {
        front = (front + 1) % Max_size;      // move front circularly forward
    }
}

// Display all elements
void display() {
    if (front == -1) {                       // empty case
        printf("\nQueue is empty.\n");
        return;
    }
    printf("\nQueue elements are: ");
    int i = front;
    while (1) {
        printf("%d ", queue[i]);
        if (i == rear) break;                // stop after printing last element
        i = (i + 1) % Max_size;
    }
    printf("\n");
}

int main() {
    int choice, value;
    while (1) {
        printf("\n--- Circular Queue Menu ---\n");
        printf("1. Insert at End\n");
        printf("2. Delete\n");
        printf("3. Display\n");
        printf("4. Insert at Beginning\n");
        printf("5. Exit\n");
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
                display();
                break;
            case 4:
                printf("Enter value to insert: ");
                scanf("%d", &value);
                enqueueAtBeg(value);
                break;
            case 5:
                printf("Exiting program.\n");
                return 0;
            default:
                printf("Enter a valid choice.\n");
        }
    }
    return 0;
}
