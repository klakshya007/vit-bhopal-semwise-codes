#include <stdio.h>
#include <stdlib.h>

// Node structure for circular queue
struct Node {
    int data;
    struct Node* next;
};

struct Node* front = NULL;
struct Node* rear = NULL;

// Enqueue: add element to circular queue
void Enqueue(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (!newNode) {
        printf("Memory allocation failed!\n");
        return;
    }
    newNode->data = value;
    newNode->next = NULL;

    if (front == NULL) {  // Queue is empty
        front = rear = newNode;
        newNode->next = front;  // Circular link
    } else {
        rear->next = newNode;
        rear = newNode;
        rear->next = front;  // Maintain circular link
    }
    printf("%d enqueued successfully.\n", value);
}

// Dequeue: remove element from circular queue
void Dequeue() {
    if (front == NULL) {  // Queue is empty
        printf("Underflow! Queue is empty.\n");
        return;
    }

    struct Node* temp = front;
    if (front == rear) {  // Only one node
        front = rear = NULL;
    } else {
        front = front->next;
        rear->next = front;  // Maintain circular link
    }

    printf("Dequeued element: %d\n", temp->data);
    free(temp);
}

// Display circular queue
void DisplayQueue() {
    if (front == NULL) {
        printf("Queue is empty.\n");
        return;
    }

    struct Node* temp = front;
    printf("Queue elements: ");
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != front);
    printf("\n");
}

// Menu-driven main function
int main() {
    int choice, value;

    do {
        printf("\n--- Circular Queue Menu ---\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter element to enqueue: ");
                scanf("%d", &value);
                Enqueue(value);
                break;
            case 2:
                Dequeue();
                break;
            case 3:
                DisplayQueue();
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
