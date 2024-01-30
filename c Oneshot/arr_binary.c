// wap to find binary of the given number
#include <stdio.h>
void find_binary(int n);
int main()
{

    int n;
    printf("n:");
    scanf("%d", &n);
    find_binary(n);
    return 0;
}
void find_binary(int n)
{
    int rm[10];
    int i;

    for (i = 0; n > 0; i++)
    {

        rm[i] = n % 2;
        n = n / 2;
    }

    int size = sizeof(rm) / sizeof(rm[0]);
    for (i = i - 1; i >= 0; i--)
    {
        // for(i=0;i<=size;i++){
        printf("%d", rm[i]);
    }
}