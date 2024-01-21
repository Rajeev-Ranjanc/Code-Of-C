#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

struct Stack {
    char array[MAX_SIZE];
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

// Function to push a character onto the stack
void push(struct Stack *stack, char ch) {
    if (isFull(stack)) {
        printf("Stack overflow! Cannot push element %c\n", ch);
    } else {
        stack->top++;
        stack->array[stack->top] = ch;
    }
}

// Function to pop a character from the stack
char pop(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow! Cannot pop from an empty stack\n");
        return '\0';
    } else {
        return stack->array[stack->top--];
    }
}

// Function to get the top element of the stack without popping
char peek(struct Stack *stack) {
    if (isEmpty(stack)) {
        return '\0';
    } else {
        return stack->array[stack->top];
    }
}

// Function to determine the precedence of operators
int precedence(char operator) {
    if (operator == '^') {
        return 3;
    } else if (operator == '*' || operator == '/') {
        return 2;
    } else if (operator == '+' || operator == '-') {
        return 1;
    } else {
        return 0;
    }
}

// Function to convert infix to postfix expression
void infixToPostfix(char infix[], char postfix[]) {
    struct Stack operatorStack;
    initializeStack(&operatorStack);

    int i, j;
    i = j = 0;

    while (infix[i] != '\0') {
        if (isalnum(infix[i])) {
            postfix[j++] = infix[i];
        } else if (infix[i] == '(') {
            push(&operatorStack, '(');
        } else if (infix[i] == ')') {
            while (!isEmpty(&operatorStack) && peek(&operatorStack) != '(') {
                postfix[j++] = pop(&operatorStack);
            }
            pop(&operatorStack); // Pop '(' from the stack
        } else {
            while (!isEmpty(&operatorStack) && precedence(peek(&operatorStack)) >= precedence(infix[i])) {
                postfix[j++] = pop(&operatorStack);
            }
            push(&operatorStack, infix[i]);
        }
        i++;
    }

    // Pop remaining operators from the stack
    while (!isEmpty(&operatorStack)) {
        postfix[j++] = pop(&operatorStack);
    }

    postfix[j] = '\0'; // Add null terminator to the postfix expression
}

// Function to convert infix to prefix expression
void infixToPrefix(char infix[], char prefix[]) {
    // Reverse the infix expression
    int len = strlen(infix);
    char reversedInfix[len + 1];
    for (int i = 0; i < len; i++) {
        reversedInfix[i] = infix[len - i - 1];
    }
    reversedInfix[len] = '\0';

    // Convert reversed infix to reversed postfix
    char reversedPostfix[len + 1];
    infixToPostfix(reversedInfix, reversedPostfix);

    // Reverse the postfix expression to get the prefix expression
    for (int i = 0; i < len; i++) {
        prefix[i] = reversedPostfix[len - i - 1];
    }
    prefix[len] = '\0'; // Add null terminator to the prefix expression
}

// Function to convert postfix to infix expression
void postfixToInfix(char postfix[], char infix[]) {
    struct Stack operandStack;
    initializeStack(&operandStack);

    int i, j;
    i = j = 0;

    while (postfix[i] != '\0') {
        if (isalnum(postfix[i])) {
            push(&operandStack, postfix[i]);
        } else {
            char operand2 = pop(&operandStack);
            char operand1 = pop(&operandStack);
            infix[j++] = '(';
            infix[j++] = operand1;
            infix[j++] = postfix[i];
            infix[j++] = operand2;
            infix[j++] = ')';
        }
        i++;
    }

    infix[j] = '\0'; // Add null terminator to the infix expression
}

// Function to convert postfix to prefix expression
void postfixToPrefix(char postfix[], char prefix[]) {
    struct Stack operandStack;
    initializeStack(&operandStack);

    int i, j;
    i = j = 0;

    while (postfix[i] != '\0') {
        if (isalnum(postfix[i])) {
            push(&operandStack, postfix[i]);
        } else {
            char operand2 = pop(&operandStack);
            char operand1 = pop(&operandStack);
            prefix[j++] = postfix[i];
            prefix[j++] = operand1;
            prefix[j++] = operand2;
        }
        i++;
    }

    prefix[j] = '\0'; // Add null terminator to the prefix expression
}

// Function to convert prefix to infix expression
void prefixToInfix(char prefix[], char infix[]) {
    struct Stack operandStack;
    initializeStack(&operandStack);

    int i, j;
    i = strlen(prefix) - 1;
    j = 0;

    while (i >= 0) {
        if (isalnum(prefix[i])) {
            push(&operandStack, prefix[i]);
        } else {
            char operand1 = pop(&operandStack);
            char operand2 = pop(&operandStack);
            infix[j++] = '(';
            infix[j++] = operand1;
            infix[j++] = prefix[i];
            infix[j++] = operand2;
            infix[j++] = ')';
        }
        i--;
    }

    infix[j] = '\0'; // Add null terminator to the infix expression
}

// Function to convert prefix to postfix expression
void prefixToPostfix(char prefix[], char postfix[]) {
    struct Stack operandStack;
    initializeStack(&operandStack);

    int i, j;
    i = strlen(prefix) - 1;
    j = 0;

    while (i >= 0) {
        if (isalnum(prefix[i])) {
            push(&operandStack, prefix[i]);
        } else {
            char operand1 = pop(&operandStack);
            char operand2 = pop(&operandStack);
            postfix[j++] = operand1;
            postfix[j++] = operand2;
            postfix[j++] = prefix[i];
        }
        i--;
    }

    postfix[j] = '\0'; // Add null terminator to the postfix expression
}

int main() {
    char infix[MAX_SIZE], postfix[MAX_SIZE], prefix[MAX_SIZE];

    // Infix to Postfix
    printf("Enter an infix expression: ");
    scanf("%s", infix);
    infixToPostfix(infix, postfix);
    printf("Postfix expression: %s\n\n", postfix);

    // Infix to Prefix
    printf("Enter an infix expression: ");
    scanf("%s", infix);
    infixToPrefix(infix, prefix);
    printf("Prefix expression: %s\n\n", prefix);

    // Postfix to Infix
    printf("Enter a postfix expression: ");
    scanf("%s", postfix);
    postfixToInfix(postfix, infix);
    printf("Infix expression: %s\n\n", infix);

    // Postfix to Prefix
    printf("Enter a postfix expression: ");
    scanf("%s", postfix);
    postfixToPrefix(postfix, prefix);
    printf("Prefix expression: %s\n\n", prefix);

    // Prefix to Infix
    printf("Enter a prefix expression: ");
    scanf("%s", prefix);
    prefixToInfix(prefix, infix);
    printf("Infix expression: %s\n\n", infix);

    // Prefix to Postfix
    printf("Enter a prefix expression: ");
    scanf("%s", prefix);
    prefixToPostfix(prefix, postfix);
    printf("Postfix expression: %s\n\n", postfix);

    return 0;
}
