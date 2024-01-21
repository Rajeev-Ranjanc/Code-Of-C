/*
WAP to implement Call by Value and Call by Reference mechanisms.
*/
#include <stdio.h>

// Function prototype for Call by Value
void callByValue(int x, int y);

// Function prototype for Call by Reference
void callByReference(int *x, int *y);

int main() {
    int a = 5, b = 10;

    // Call by Value
    printf("Before Call by Value: a = %d, b = %d\n", a, b);
    callByValue(a, b);
    printf("After Call by Value: a = %d, b = %d\n\n", a, b);

    // Call by Reference
    printf("Before Call by Reference: a = %d, b = %d\n", a, b);
    callByReference(&a, &b);
    printf("After Call by Reference: a = %d, b = %d\n", a, b);

    return 0;
}

// Function definition for Call by Value
void callByValue(int x, int y) {
    x = x * 2;
    y = y * 2;
    printf("Inside Call by Value: x = %d, y = %d\n", x, y);
}

// Function definition for Call by Reference
void callByReference(int *x, int *y) {
    *x = *x * 2;
    *y = *y * 2;
    printf("Inside Call by Reference: *x = %d, *y = %d\n", *x, *y);
}
