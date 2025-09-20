#include <stdio.h>
#include <stdlib.h>

// structure for doubly linked list node
struct dll {
    struct dll* next;
    struct dll* prev;
    int data;
};

struct dll* start = NULL;   // head of the list
struct dll* new_node;       // for creating new nodes

// insert at beginning
void insertAtBeg() {
    int d;
    new_node = (struct dll*)malloc(sizeof(struct dll));
    printf("Enter The Data Field: ");
    scanf("%d", &d);
    new_node->data = d;
    new_node->next = new_node->prev = NULL;

    if(start != NULL) {             // if list is not empty
        new_node->next = start;     // link new node to old start
        start->prev = new_node;     // link old start back to new node
        start = new_node;           // update head
        return;
    }
    start = new_node; // if list empty, new node is head
}

// insert at end
void insertAtEnd() {
    int d;
    new_node = (struct dll*)malloc(sizeof(struct dll));
    printf("Enter The Data Field: ");
    scanf("%d", &d);
    new_node->data = d;
    new_node->next = new_node->prev = NULL;

    if(start == NULL) { // if list empty
        start = new_node;
        return;
    }

    struct dll* temp = start;
    while (temp->next != NULL) { // move to last node
        temp = temp->next;
    }
    temp->next = new_node;   // link last node to new
    new_node->prev = temp;   // link new node back to old last
}

// delete from beginning
void deleteAtBeg() {
    if(start == NULL) {
        printf("List Is Already Empty\n");
        return;
    }
    struct dll* temp = start;
    if(start->next == NULL) { // only one node
        free(start);
        start = NULL;
        return;
    }
    start = start->next;   // move head forward
    start->prev = NULL;    // remove back link
    free(temp);            // free old head
}

// delete from end
void deleteAtEnd() {
    if(start == NULL) {
        printf("List Is Already Empty\n");
        return;
    }
    if(start->next == NULL) { // only one node
        free(start);
        start = NULL;
        return;
    }
    struct dll* temp = start;
    while(temp->next != NULL) { // move to last node
        temp = temp->next;
    }
    temp->prev->next = NULL; // disconnect last
    free(temp);
}

// insert at given index
void insertAtI() {
    int pos, d;
    printf("Enter The Index: ");
    scanf("%d", &pos);

    if(pos < 0) {
        printf("Enter A Valid Index...\n");
        return;
    }
    if(pos == 0) { // special case: at beginning
        insertAtBeg();
        return;
    }

    struct dll* temp = start;
    int count = 0;
    while(temp != NULL && count < pos-1) { // stop before target pos
        temp = temp->next;
        count++;
    }
    if(temp == NULL) {
        printf("Out Of Bounds\n");
        return;
    }

    new_node = (struct dll*)malloc(sizeof(struct dll));
    printf("Enter The Data Field: ");
    scanf("%d", &d);
    new_node->data = d;

    new_node->next = temp->next; // link to next node
    new_node->prev = temp;       // link back to prev node
    if(temp->next != NULL)
        temp->next->prev = new_node;
    temp->next = new_node;
}

// delete from given index
void deleteAtI() {
    int pos;
    printf("Enter The Index: ");
    scanf("%d", &pos);

    if(pos < 0) {
        printf("Enter A Valid Index...\n");
        return;
    }
    if(pos == 0) { // special case: delete first
        deleteAtBeg();
        return;
    }

    struct dll* temp = start;
    int count = 0;
    while(temp != NULL && count < pos) { // move to target node
        temp = temp->next;
        count++;
    }
    if(temp == NULL) {
        printf("Out Of Bounds\n");
        return;
    }

    temp->prev->next = temp->next; // bypass node
    if(temp->next != NULL)
        temp->next->prev = temp->prev;
    free(temp);
}

// display the list
void display() {
    struct dll* temp = start;
    while(temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// driver menu
int main() {
    int a;
    while(1) {
        printf("Enter Your Choice: ");
        scanf("%d", &a);
        switch(a) {
            case 1: insertAtBeg(); break;
            case 2: display(); break;
            case 3: return 0;
            case 4: insertAtEnd(); break;
            case 5: deleteAtBeg(); break;
            case 6: deleteAtEnd(); break;
            case 7: insertAtI(); break;
            case 8: deleteAtI(); break;
            default: printf("Please Try Again..."); break;
        }
    }
}
