// linked list by Harry bhai
// Insertion in the begining
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
    struct node *fourth = (struct node *)malloc(sizeof(struct node));
    // struct node *temp = (struct node *)malloc(sizeof(struct node));

    head->data = 10;
    head->next = first;

    //insertion at begining
    fourth ->data = 999;
    fourth ->next = head;
    head = fourth;

    first->data = 20;
    first->next = second;

    second->data = 30;
    second->next = third;

    third->data = 40;
    third->next = 0;


    display(head);
    return 0;
}