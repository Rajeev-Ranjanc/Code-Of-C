//hackerrank problem of pointer
#include <stdio.h>

void update(int *a, int *b)
{
    int sum, diff;
    sum = *a + *b;
    diff = abs(*a - *b);
    *a = sum;
    *b = diff;

    return;
}

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;
    printf("enter number:");
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("\nupdated value:\n");
    printf("%d\n%d", a, b);

    return 0;
}