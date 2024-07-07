#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* head = NULL;
struct node* newnode;
struct node* temp;

void insertatbig(void) {
    int choice;
    do {
        newnode = (struct node*)malloc(sizeof(struct node));
        if (newnode == NULL) {
            printf("memory not allocated");
            return;
        }
        printf("enter the data");
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if (head == NULL) {
            head = temp = newnode;
        }
        else {
            temp->next = head;
            head = newnode;
        }
        printf("do you want to continue (press 1 for continue press 0 for display)");
        scanf("%d", &choice);
    } while (choice);
}

void display() {
    struct node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main() {
    insertatbig();
    display();
    return 0; // Added return statement for main
}
