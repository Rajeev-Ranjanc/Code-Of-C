// WAP to implement Stack.

// a. Push an element onto a stack.
// b. Pop the stack.
// c. Display the contents of the stack.
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

struct Stack {
    int array[MAX_SIZE];
    int top;
};

// Function to initialize the stack
void initializeStack(struct Stack *stack) {
    stack->top = -1;
}

// Function to check if the stack is empty
int isEmpty(struct Stack *stack) {
    return stack->top == -1;
}

// Function to check if the stack is full
int isFull(struct Stack *stack) {
    return stack->top == MAX_SIZE - 1;
}

// Function to push an element onto the stack
void push(struct Stack *stack, int element) {
    if (isFull(stack)) {
        printf("Stack overflow! Cannot push element %d\n", element);
    } else {
        stack->top++;
        stack->array[stack->top] = element;
        printf("Element %d pushed onto the stack\n", element);
    }
}

// Function to pop the stack
void pop(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow! Cannot pop from an empty stack\n");
    } else {
        printf("Element %d popped from the stack\n", stack->array[stack->top]);
        stack->top--;
    }
}

// Function to display the contents of the stack
void display(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
    } else {
        printf("Stack contents: ");
        for (int i = 0; i <= stack->top; i++) {
            printf("%d ", stack->array[i]);
        }
        printf("\n");
    }
}

int main() {
    struct Stack stack;
    initializeStack(&stack);

    // Push elements onto the stack
    push(&stack, 5);
    push(&stack, 10);
    push(&stack, 15);

    // Display the contents of the stack
    display(&stack);

    // Pop an element from the stack
    pop(&stack);

    // Display the contents of the stack after popping
    display(&stack);

    return 0;
}
