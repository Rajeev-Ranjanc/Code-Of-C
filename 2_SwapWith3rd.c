// WAP to implement three different ways to swap two variables without using a third variable.
#include <stdio.h>

// Method 1: Using XOR with arithmetic operations
void swap1(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}


int main() {
    int x = 5, y = 10;

    // Method 1
    printf("Before Swap (Method 1): x = %d, y = %d\n", x, y);
    swap1(&x, &y);
    printf("After Swap (Method 1): x = %d, y = %d\n\n", x, y);

    return 0;
}
