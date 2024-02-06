/* linked list is palindrome or not  first we will
we will find the middle of the linked list and wil reverse the scond half of the linked later we will compare second hald
with the first halves
*/

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    char data;
    struct Node *next;
};

struct Node *reverse(struct Node *head)
{
    struct Node *prev = NULL;
    struct Node *current = head;
    struct Node *next = NULL;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    return prev;
}

int isPalindrome(struct Node *head)
{
    struct Node *start = head;
    struct Node *end = head;
    struct Node *second_half = NULL;

    // Find the middle of the linked list
    while (end != NULL && end->next != NULL)
    {
        start = start->next;
        end = end->next->next;
    }

    // Reverse the second half of the linked list
    second_half = reverse(start);

    // Compare the first half with the reversed second half
    while (head != NULL && second_half != NULL)
    {
        if (head->data != second_half->data)
        {
            return 0;
        }
        head = head->next;
        second_half = second_half->next;
    }

    return 1;
}

// function to push the elements in the linked list
void push(struct Node **ptr, char data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->next = (*ptr);
    (*ptr) = new_node;
}

int main()
{
    struct Node *head = NULL;

    // Create linked lists
    // push(&head, 'a');
    // push(&head, 'b');

    // if (isPalindrome(head))
    // {
    //     printf("Palindrome\n");
    // }
    // else
    // {
    //     printf("Not palindrome\n");
    // }

    // push(&head, 'a');

    // if (isPalindrome(head))
    // {
    //     printf("Palindrome\n");
    // }
    // else
    // {
    //     printf("Not palindrome\n");
    // }

    // push(&head, 's');
    // push(&head, 'a');
    // push(&head, 'g');
    // push(&head, 'a');
    // push(&head, 'r');

    // if (isPalindrome(head))
    // {
    //     printf("Palindrome\n");
    // }
    // else
    // {
    //     printf("Not palindrome\n");
    // }

    /*
    this node "radar" will print palindrome when the linked list will be empty will contain only "aradar"
    */
    push(&head, 'r');
    push(&head, 'a');
    push(&head, 'd');
    push(&head, 'a');
    push(&head, 'r');

    // Check if the linked list is a palindrome
    if (isPalindrome(head))
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not palindrome\n");
    }

    return 0;
}