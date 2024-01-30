// Armstrong number
#include <stdio.h>
int main()
{
    int n, r, sum=0, temp;
    printf("enter number:");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = sum + r * r * r;
        n = n / 10;
    }
    if (sum == temp)
    {
        printf("\n armstrong number");
    }
    else
    {
        printf("\n not a armstrong number");
    }
    return 0;
}