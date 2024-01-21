// WAP to implement two stacks in a single array.
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

struct TwoStacks {
    int array[MAX_SIZE];
    int top1;
    int top2;
};

// Function to initialize the two stacks
void initializeTwoStacks(struct TwoStacks *twoStacks) {
    twoStacks->top1 = -1;
    twoStacks->top2 = MAX_SIZE;
}

// Function to check if the first stack is empty
int isEmptyStack1(struct TwoStacks *twoStacks) {
    return twoStacks->top1 == -1;
}

// Function to check if the second stack is empty
int isEmptyStack2(struct TwoStacks *twoStacks) {
    return twoStacks->top2 == MAX_SIZE;
}

// Function to check if the first stack is full
int isFullStack1(struct TwoStacks *twoStacks) {
    return twoStacks->top1 == twoStacks->top2 - 1;
}

// Function to check if the second stack is full
int isFullStack2(struct TwoStacks *twoStacks) {
    return twoStacks->top2 == twoStacks->top1 + 1;
}

// Function to push an element onto the first stack
void pushStack1(struct TwoStacks *twoStacks, int element) {
    if (isFullStack1(twoStacks)) {
        printf("Stack 1 overflow! Cannot push element %d\n", element);
    } else {
        twoStacks->array[++twoStacks->top1] = element;
        printf("Element %d pushed onto Stack 1\n", element);
    }
}

// Function to push an element onto the second stack
void pushStack2(struct TwoStacks *twoStacks, int element) {
    if (isFullStack2(twoStacks)) {
        printf("Stack 2 overflow! Cannot push element %d\n", element);
    } else {
        twoStacks->array[--twoStacks->top2] = element;
        printf("Element %d pushed onto Stack 2\n", element);
    }
}

// Function to pop an element from the first stack
int popStack1(struct TwoStacks *twoStacks) {
    if (isEmptyStack1(twoStacks)) {
        printf("Stack 1 underflow! Cannot pop from an empty stack\n");
        return -1; // Returning -1 to indicate underflow
    } else {
        return twoStacks->array[twoStacks->top1--];
    }
}

// Function to pop an element from the second stack
int popStack2(struct TwoStacks *twoStacks) {
    if (isEmptyStack2(twoStacks)) {
        printf("Stack 2 underflow! Cannot pop from an empty stack\n");
        return -1; // Returning -1 to indicate underflow
    } else {
        return twoStacks->array[twoStacks->top2++];
    }
}

int main() {
    struct TwoStacks twoStacks;
    initializeTwoStacks(&twoStacks);

    // Push elements onto Stack 1
    pushStack1(&twoStacks, 5);
    pushStack1(&twoStacks, 10);
    pushStack1(&twoStacks, 15);

    // Push elements onto Stack 2
    pushStack2(&twoStacks, 20);
    pushStack2(&twoStacks, 25);
    pushStack2(&twoStacks, 30);

    // Pop elements from Stack 1
    int popped1 = popStack1(&twoStacks);
    if (popped1 != -1) {
        printf("Popped from Stack 1: %d\n", popped1);
    }

    // Pop elements from Stack 2
    int popped2 = popStack2(&twoStacks);
    if (popped2 != -1) {
        printf("Popped from Stack 2: %d\n", popped2);
    }

    return 0;
}
