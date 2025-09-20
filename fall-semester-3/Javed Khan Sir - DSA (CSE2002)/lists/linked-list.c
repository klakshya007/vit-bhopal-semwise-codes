#include <stdio.h>
#include <stdlib.h>

// structure for Employee node in linked list
struct Employee {
    char name[20];
    int salary;
    struct Employee *next;
};

typedef struct Employee emp;
emp *temp, *head = NULL;   // head points to first node
emp *new_node;             // used for creating nodes

// insert at end (back of list)
void Insertion() {
    new_node = (emp*) malloc(sizeof(emp));
    printf("Enter Name Of The Employee: ");
    scanf("%s", new_node->name);
    printf("Enter Salary Of The Employee: ");
    scanf("%d", &new_node->salary);
    new_node->next = NULL;

    if (head == NULL) {       // first node case
        head = new_node;
        temp = head;
    } else {                  // append at end
        temp->next = new_node;
        temp = new_node;
    }
}

// display all nodes
void Display() {
    if (head == NULL) {
        printf("List Is Empty\n");
    } else {
        printf("The List Is:\n");
        temp = head;
        while (temp != NULL) {   // traverse till NULL
            printf("Name -> %s, Salary -> %d\n", temp->name, temp->salary);
            temp = temp->next;
        }
        printf("\n");
    }
}

// insert at beginning
void InsertBeg() {
    new_node = (emp*) malloc(sizeof(emp));
    printf("Enter Name Of The Employee: ");
    scanf("%s", new_node->name);
    printf("Enter Salary Of The Employee: ");
    scanf("%d", &new_node->salary);
    new_node->next = NULL;

    if (head == NULL) {     // list empty
        head = new_node;
    } else {                // link new node before head
        new_node->next = head;
        head = new_node;
    }
}

// insert at given position
void InsertI(){
    int count = 0, pos = 0;
    printf("Enter The Position At Which You Would Like To Enter The Data: ");
    scanf("%d", &pos);

    if (pos < 0) {
        printf("Position Can't Be Negative, Retry...\n");
        return;
    }

    new_node = (emp*) malloc(sizeof(emp));
    printf("Enter Name Of The Employee: ");
    scanf("%s", new_node->name);
    printf("Enter Salary Of The Employee: ");
    scanf("%d", &new_node->salary);
    new_node->next = NULL;

    if (pos == 0) { // insert at head
        new_node->next = head;
        head = new_node;
        return;
    }

    temp = head;
    while (temp != NULL && count < pos - 1) { // move to (pos-1)
        temp = temp->next;
        count++;
    }

    if (temp == NULL) { // invalid position
        printf("Position Is Out Of Bound\n");
        free(new_node);
        return;
    }

    new_node->next = temp->next; // link new node
    temp->next = new_node;
}

// delete from beginning
void DeleteBeg() {
    if (head == NULL) {
        printf("List Is Already Empty\n");
        return;
    }
    temp = head->next;
    free(head);
    head = temp;
}

// delete from end
void DeleteEnd() {
    if (head == NULL) {
        printf("List Is Already Empty\n");
        return;
    }
    if (head->next == NULL) { // only one node
        free(head);
        head = NULL;
        return;
    }
    emp *prev = NULL;
    temp = head;
    while (temp->next != NULL) { // move to last
        prev = temp;
        temp = temp->next;
    }
    free(temp);
    prev->next = NULL; // second last becomes last
}

// delete from given position
void DeleteI() {
    int pos = 0, count = 0;
    printf("Enter The Position Of The Node Which You Would Like To Have Deleted: ");
    scanf("%d", &pos);

    if (pos < 0) {
        printf("Position Can't Be Negative\n");
        return;
    }
    if (head == NULL) {
        printf("List Is Already Empty\n");
        return;
    }

    temp = head;
    if (pos == 0) {  // delete head
        head = head->next;
        free(temp);
        return;
    }

    emp* prev = NULL;
    while (temp != NULL && count < pos) { // move to target
        prev = temp;
        temp = temp->next;
        count++;
    }

    if (temp == NULL) { // invalid position
        printf("Position Is Out Of Bound\n");
        return;
    }

    prev->next = temp->next; // bypass node
    free(temp);
}

// reverse the linked list
void ReverseLL() {
    emp* prev = NULL;
    temp = head;
    emp* next = NULL;
    while(temp != NULL) {
        next = temp->next;   // store next
        temp->next = prev;   // reverse link
        prev = temp;
        temp = next;
    }
    head = prev; // new head is old tail
}

int main() {
    int choice;
    while (1) {
        printf("1 - Insert A New Element At The Back\n"
               "2 - Display The List\n"
               "3 - Stop\n"
               "4 - Insert At Beginning\n"
               "5 - Insert At Element At The I'th Node\n"
               "6 - Delete The First Element\n"
               "7 - Delete The Last Element\n"
               "8 - Delete Of Node At An Specific Location\n"
               "9 - Reverse The List\n"
               "Enter Choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: Insertion(); break;
            case 2: Display(); break;
            case 3: return 0;
            case 4: InsertBeg(); break;
            case 5: InsertI(); break;
            case 6: DeleteBeg(); break;
            case 7: DeleteEnd(); break;
            case 8: DeleteI(); break;
            case 9: ReverseLL(); break;
            default: printf("Invalid Choice, Try Again\n"); break;
        }
    }
    return 0;
}
