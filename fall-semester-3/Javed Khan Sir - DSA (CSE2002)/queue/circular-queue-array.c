#include <stdlib.h>
#include <stdio.h>
#define max_size 5   // maximum size of circular queue

int queue[max_size];
int front = -1;      // points to first element
int rear = -1;       // points to last element

// insert an element in queue
void enqueue(int data){
    if(front == -1 && rear == -1){       // queue empty case
        front = rear = 0;
        queue[rear] = data;
    }
    else if((rear+1) % max_size == front){ // queue full condition
        printf("\nQueue is full.");
    }
    else{                                 // normal insertion
        rear = (rear+1) % max_size;       // move rear circularly
        queue[rear] = data;
    }
}

// remove an element from queue
void dequeue(){
    if(front == -1 && rear == -1){         // empty case
        printf("\nQueue is empty.");
    }
    else if(front == rear){                // only one element
        printf("\nThe element we dequeued is: %d", queue[front]);
        front = rear = -1;                 // reset queue
    }
    else{                                  // more than one element
        printf("\nThe element we dequeued is: %d", queue[front]);
        front = (front+1) % max_size;      // move front circularly
    }
}

// display elements of queue
void display(){
    if(front == -1 && rear == -1){
        printf("\nQueue is empty. Nothing to display.");
        return;
    }

    printf("\nThe elements of queue are: ");
    int temp = front;
    while(temp != rear){                   // print until rear
        printf(" %d", queue[temp]);
        temp = (temp+1) % max_size;        // move circularly
    }
    printf(" %d", queue[rear]);            // print last element
    printf("\n");
}

// view front element
void peek(){
    if(front == -1 && rear == -1){
        printf("\nQueue is empty.");
    }
    else{
        printf("\nThe first element of queue is: %d", queue[front]);
    }
}

int main(){
    enqueue(4);
    enqueue(5);
    enqueue(8);
    display();
    dequeue();
    enqueue(2);
    peek();
    display();
    return 0;
}
