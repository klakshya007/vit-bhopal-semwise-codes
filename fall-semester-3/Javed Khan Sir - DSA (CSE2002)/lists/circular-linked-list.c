#include <stdio.h>
#include <stdlib.h>

// structure for a circular linked list node
struct cll {
    int data;
    struct cll *next;
};

struct cll *start = NULL, *last = NULL; // pointers to track start and last node

// insert new node at beginning
void InsertAtBeg() {
    struct cll *new_node = (struct cll*) malloc(sizeof(struct cll));
    printf("Enter The Data Field: ");
    scanf("%d", &new_node->data);

    if (start == NULL) { // first node case
        start = last = new_node;
        last->next = start; // circular link
        return;
    }

    new_node->next = start; // new node points to current start
    last->next = new_node;  // last points to new start
    start = new_node;       // update start
}

// insert new node at end
void InsertAtEnd() {
    struct cll *new_node = (struct cll*) malloc(sizeof(struct cll));
    printf("Enter The Data Field: ");
    scanf("%d", &new_node->data);

    if (last == NULL) { // first node case
        start = last = new_node;
        last->next = start; // circular link
        return;
    }

    new_node->next = start; // new node points to start
    last->next = new_node;  // old last points to new node
    last = new_node;        // update last
}

// display all nodes
void Display() {
    if (start == NULL) {
        printf("The List Is Empty\n");
        return;
    }

    printf("The List Is: ");
    struct cll *temp = start;
    // loop until we circle back to start
    do {
        printf("%d ", temp->data);
        temp = temp->next;
    } while (temp != start);
    printf("\n");
}

// delete node at beginning
void DeletionAtBeg() {
    if (start == NULL) {
        printf("The List Is Already Empty\n");
        return;
    }

    if (start->next == start) { // only one node
        free(start);
        start = last = NULL;
        return;
    }

    struct cll *temp = start;
    start = start->next;    // move start to next node
    last->next = start;     // maintain circular link
    free(temp);             // delete old start
}

// delete node at end
void DeletionAtEnd() {
    if (start == NULL) {
        printf("The List Is Already Empty\n");
        return;
    }

    if (start->next == start) { // only one node
        free(start);
        start = last = NULL;
        return;
    }

    struct cll *temp = start;
    // move till node before last
    while (temp->next != last) {
        temp = temp->next;
    }
    free(last);             // delete old last
    last = temp;            // update last
    last->next = start;     // maintain circular link
}

int main() {
    int a;
    while (1) {
        printf("1-Insert At Beginning\n2-Display\n3-Stop\n4-Insert At End\n"
               "5-Deletion At Beginning\n6-Deletion At End\nEnter Your Choice: ");
        scanf("%d", &a);

        switch (a) {
            case 1: InsertAtBeg(); break;
            case 2: Display(); break;
            case 3: return 0;
            case 4: InsertAtEnd(); break;
            case 5: DeletionAtBeg(); break;
            case 6: DeletionAtEnd(); break;
            default: printf("Enter A Valid Choice...\n"); break;
        }
    }
    return 0;
}
