#include <stdio.h>
#include <stdlib.h>

// Define the node structure
struct node {
    int data;
    struct node* next;
};

// Function to reverse the linked list
void reverseList(struct node **head) {
    struct node *prev = NULL, *current = *head, *next;

    // Iterate through the list
    while (current != NULL) {
        // Store the next node
        next = current->next;

        // Change the next node of the current node to the previous node
        current->next = prev;

        // Move the previous node and the current node to the next nodes
        prev = current;
        current = next;
    }

    // Update the head pointer
    *head = prev;
}

// Function to print the linked list
void printList(struct node *node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
}

// Function to create a new node with given data
struct node* newNode(int data) {
    struct node* node = (struct node*) malloc(sizeof(struct node));
    node->data = data;
    node->next = NULL;
    return node;
}

int main() {
    // Create a linked list: 1 -> 2 -> 3 -> 4 -> 5
    struct node *head = newNode(1);
    head->next = newNode(2);
    head->next->next = newNode(3);
    head->next->next->next = newNode(4);
    head->next->next->next->next = newNode(5);

    printf("Linked List before reversing: \n");
    printList(head);

    // Reverse the linked list
    reverseList(&head);

    printf("\nLinked List after reversing: \n");
    printList(head);

    return 0;
}