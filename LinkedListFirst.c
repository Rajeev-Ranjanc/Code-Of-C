/*Always Push this folder code in LinkedList branch*/
/*
this program is of linked list in which we create a linked list and 
*/

// Learning LinkedList
// implementation of linked list
// adding elements in the linked list
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// creating a node
struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head;
    struct node *newnode;
    struct node *temp;
    head = 0;
    int choice = 1;

    while (choice)
    {
        // creating new_node and will return the address of nextpart & that address will contain
        // newnode

        newnode = (struct node *)malloc(sizeof(struct node));
        printf("enter number which you want to insert in the linked list:");
        scanf("%d", &newnode->data);
        newnode->next = 0;
        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
        printf("\nElements inserted");

        printf("\ndo you want to continue?(0/1)?:");
        scanf("%d", &choice);
    }

    // diplaying all the nodes of the
    temp = head;
    printf("\nlinked-list elements are:");
    while (temp != 0)
    {
        printf("%d  ", temp->data);
        temp = temp->next;
    }

    //  Insertion of a node begining of the linked list
    printf("\nInsertion at begining in the linked list");
    struct node *newbegin;
    newbegin = (struct node *)malloc(sizeof(struct node));

    printf("\nenter data which you want to insert at begining:");
    scanf("%d", &newbegin->data);
    newbegin->next = head;
    head = newbegin;

    printf("\nafter insertion at begining:\n");

    temp = head;
    printf("\nlinked-list elements are:");
    while (temp != 0)
    {
        printf("%d  ", temp->data);
        temp = temp->next;
    }

    //Insertion of node at the end of the linked list

    struct node* newnodeatlast;

    newnodeatlast = (struct node *)malloc(sizeof(struct node));
    printf("\nenter data which you want to insert at last in the linked list:");
    scanf("%d",&newnodeatlast ->data);
    newnodeatlast->next = 0;

    // linking the last node to the end of the linked list
        temp = head;
        while (temp->next!=0)
        {
            temp = temp->next;
        }
        temp ->next = newnodeatlast;
    

    // diplaying all the nodes of the
    temp = head;
    printf("\nlinked-list elements are:");
    while (temp != 0)
    {
        printf("  %d", temp->data);
        temp = temp->next;
    }


    /*Insert a node after a node in the linked list in a singly next*/



    /*delete a node from begining in a singly linked list*/


    return 0;
}