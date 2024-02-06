/*calculating the frequency of the elements
To calculate the frequency of occurrence of each element in a given linked list in the same order they appear
we will reate an empty hash table to store the frequency of each element and
will traverse the linked list, and for each element, increment its frequency in the hash table,
Traverse the hash table and print each element along with its frequency.
*/
#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void printFrequency(struct Node *head)
{
    // Create an empty hash table
    struct
    {
        int data;
        int count;
    } hashTable[100];

    // Initialize the hash table
    for (int i = 0; i < 100; i++)
    {
        hashTable[i].data = 0;
        hashTable[i].count = 0;
    }

    // Traverse the linked list and increment the frequency of each element in the hash table
    struct Node *current = head;
    while (current != NULL)
    {
        hashTable[current->data].data = current->data;
        hashTable[current->data].count++;
        current = current->next;
    }

    // Traverse the hash table and print each element along with its frequency
    for (int i = 0; i < 100; i++)
    {
        if (hashTable[i].data != 0)
        {
            printf("%d -> %d\n", hashTable[i].data, hashTable[i].count);
        }
    }
}

void push(struct Node **head_ref, int new_data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

int main()
{
    struct Node *head = NULL;

    // Create linked list
    push(&head, 20);
    push(&head, 18);
    push(&head, 15);
    push(&head, 20);
    push(&head, 6);
    push(&head, 18);
    push(&head, 5);
    push(&head, 18);

    // Print the frequency of each element
    printFrequency(head);

    return 0;
}