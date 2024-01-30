// Swapping value of two number using pointer
#include <stdio.h>
void swap(int a, int b);
void _swap(int *a, int *b);
int main()
{
    int x, y;
    printf("a and b:");
    scanf("%d%d", &x, &y);
    
    swap(x, y);
    printf("\na:%d \t b:%d", x, y);
    

    _swap(&x, &y);
    printf("\na:%d \t b:%d", x, y);
    return 0;
}
// call by value
void swap(int a, int b)
{
    printf("\nCall by value");
    int c = b;
    b = a;
    a = c;
    printf("\na:%d \t b:%d", a, b);
}
// call by reference
void _swap(int *a, int *b)
{
    printf("\n\ncall by reference");
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("\na:%d \t b:%d", *a, *b);
}
