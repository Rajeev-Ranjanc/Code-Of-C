// checking address of the pointer
#include <stdio.h>
void address(int* n);
int main()
{
    int n;
    printf("n:");
    scanf("%d", &n);
    printf("%u", &n);

    address(&n);
    return 0;
}
void address(int* n)
{
    printf("\nfunction executed");
    printf("\n%u", n);
}