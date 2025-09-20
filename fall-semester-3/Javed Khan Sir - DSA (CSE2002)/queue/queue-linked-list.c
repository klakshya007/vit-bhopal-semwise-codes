#include <stdlib.h>
#include <stdio.h>

// Node structure for storing data
struct node{           
    int data;
    struct node *next;
};

// Queue structure with front and rear pointers
struct queue{
    struct node *front;
    struct node *rear;
};

struct queue *q1;   // global queue pointer

// Initialize the queue
void init(){
    q1->front = NULL;
    q1->rear = NULL;
}

// Insert element at the end (enqueue)
void insert(struct queue *q1, int value){                                    
    struct node *new_node = (struct node*)malloc(sizeof(struct node));
    new_node->data = value;
    new_node->next = NULL;

    if(q1->rear == NULL){  // queue is empty
        q1->front = q1->rear = new_node;
    }
    else{
        q1->rear->next = new_node;
        q1->rear = new_node;
    }
}

// Delete element from the front (dequeue)
void delete(){
    if(q1->front == NULL){
        printf("\nQueue is empty.");
        return;
    }
    struct node *temp = q1->front;
    q1->front = q1->front->next;

    if(q1->front == NULL){  // if queue becomes empty
        q1->rear = NULL;
    }
    free(temp);
}

// Display all elements
void display(struct queue *q){
    if(q->front == NULL){
        printf("\nQueue is empty.");
        return;
    }
    struct node *temp = q->front;
    printf("Queue elements are: ");
    while(temp != NULL){
        printf(" %d", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Show the first element
void peek(){
    if(q1->front == NULL && q1->rear == NULL){
        printf("\nQueue is empty.");
    }
    else{
        printf("\nThe first element of queue is: %d", q1->front->data);
    }
}

int main(){
    q1 = (struct queue*)malloc(sizeof(struct queue));
    init();

    int choice, value;
    while(1){
        printf("\n--- Queue Menu ---\n");
        printf("1. Insert\n2. Delete\n3. Display\n4. Peek\n5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                insert(q1, value);
                break;
            case 2:
                delete();
                break;
            case 3:
                display(q1);
                break;
            case 4:
                peek();
                break;
            case 5:
                free(q1);
                return 0;
            default:
                printf("Invalid choice!\n");
        }
    }
}
