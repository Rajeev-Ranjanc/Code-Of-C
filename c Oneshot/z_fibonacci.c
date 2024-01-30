// generating fibonacci series
#include <stdio.h>
/*
int fibo(int n);
int main()
{
    //int n;
    // printf("\nn:");
    // scanf("%d",&n);
    printf("\n%d", fibo(6));
    return 0;
}
int fibo( int n)
{
    if (n == 0 || n == 1)
    {
        if (n == 0)
        {
            return 0;
        }
        else
        {
            return 1;
        }
    }
    int fibonm1 = fibo(n - 1);
    int fibonm2 = fibo(n - 2);
    int fibon = fibonm1 + fibonm2;

    return fibon;
}

*/

// using loops and prints the origional series
int main()
{
    int a = 0, b = 1, c, n, i;
    printf("n:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        if (i == 0)
        {
            printf("%d", i);
        }
        if (n == 0 || n == 1)
        {
            if (n == 0)
            {
                printf("%d", n);
            }
            if (n == 1)
            {
                printf("%d", n);
            }
        }
        a = b;
        b = c;
        c = a + b;
        printf("\t%d", c);
    }

    return 0;
}