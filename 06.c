// WAP to evaluate a postfix expression.
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_SIZE 100

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
    }
}

// Function to pop an element from the stack
int pop(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow! Cannot pop from an empty stack\n");
        return -1; // Returning -1 to indicate underflow
    } else {
        return stack->array[stack->top--];
    }
}

// Function to evaluate a postfix expression
int evaluatePostfix(char postfix[]) {
    struct Stack operandStack;
    initializeStack(&operandStack);

    int i = 0;

    while (postfix[i] != '\0') {
        if (isdigit(postfix[i])) {
            // If the character is a digit, convert it to an integer and push onto the stack
            push(&operandStack, postfix[i] - '0');
        } else {
            // If the character is an operator, pop two operands from the stack, perform the operation, and push the result back
            int operand2 = pop(&operandStack);
            int operand1 = pop(&operandStack);

            switch (postfix[i]) {
                case '+':
                    push(&operandStack, operand1 + operand2);
                    break;
                case '-':
                    push(&operandStack, operand1 - operand2);
                    break;
                case '*':
                    push(&operandStack, operand1 * operand2);
                    break;
                case '/':
                    if (operand2 != 0) {
                        push(&operandStack, operand1 / operand2);
                    } else {
                        printf("Error: Division by zero\n");
                        return -1; // Returning -1 to indicate an error
                    }
                    break;
                default:
                    printf("Error: Invalid operator\n");
                    return -1; // Returning -1 to indicate an error
            }
        }
        i++;
    }

    // The final result should be on the top of the stack
    if (!isEmpty(&operandStack)) {
        return pop(&operandStack);
    } else {
        printf("Error: Empty stack after evaluation\n");
        return -1; // Returning -1 to indicate an error
    }
}

int main() {
    char postfix[MAX_SIZE];

    // Get the postfix expression from the user
    printf("Enter a postfix expression: ");
    scanf("%s", postfix);

    // Evaluate the postfix expression
    int result = evaluatePostfix(postfix);

    // Display the result
    if (result != -1) {
        printf("Result: %d\n", result);
    }

    return 0;
}
