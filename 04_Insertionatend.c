// linked list by Harry bhai
// Insertion after a specific node
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

void display(struct node *ptr)
{
    printf("linked list elements are:\n");
    while (ptr != 0)
    {
        printf("%d  ", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *first = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));

    // this node is to be inserted at the end of the linked list
    struct node *fourth = (struct node *)malloc(sizeof(struct node));
    fourth->data = 100000;
    fourth->next = 0;

    head->data = 10;
    head->next = first;

    first->data = 20;
    first->next = second;

    second->data = 30;
    second->next = fourth;

    //linking the fourth node at the end of the linked list
    third->data = 40;
    third->next = fourth;

    display(head);
    return 0;
}