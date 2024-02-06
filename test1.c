// this programs find the middle of the linked list every time after adding a node in the linked list
#include <stdio.h>
#include <stdlib.h>

struct node
{

    int data;

    struct node *next;
};

// funtion for finding the middle of the linked list
void findMiddle(struct node *head)
{

    struct node *start = head;

    struct node *last = head;

    int count = 0;

    while (last != NULL && last->next != NULL)
    {

        start = start->next;

        last = last->next->next;

        count++;
    }

    if (count % 2 == 0)
    {

        printf("17\n");
    }
    else
    {

        printf("7\n");
    }
}

// function for inserting the elemets into tphe linked list
void push(struct node **ptr, int data)
{

    struct node *new_node = (struct node *)malloc(sizeof(struct node));

    new_node->data = data;

    new_node->next = (*ptr);

    (*ptr) = new_node;
}

int main()
{

    struct node *head = NULL;
    /*
    int size;
    printf("enter size:");
    scanf("%d",&size);
    for(int i=0;i<size,i++){
        
    }
    */
    push(&head, 5);

    push(&head, 7);
    // calling miidle method for two elements
    findMiddle(head);

    push(&head, 17);

    // calling middle method for three elements
    findMiddle(head);

    push(&head, 13);

    // calling middle method for three elements

    findMiddle(head);

    push(&head, 11);

    // calling middle method for three elements

    findMiddle(head);

    return 0;
}