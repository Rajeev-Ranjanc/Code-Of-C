/*
WAP to implement the following programs using recursion.
a. Factorial
b. Fibonacci Series
c. Greatest Common Divisor
d. Linear Search
e. Binary Search
f. Tower of Hanoi
*/
#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int num;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);
    printf("Factorial of %d is %d\n", num, factorial(num));
    return 0;
}
