#include <stdio.h>
void slicestring(char str[], int n, int m);
int main()
{
    char str[100];
    int n, m;
    printf("enter string:");
    fgets(str, 100, stdin);
    printf("enter the range of the slice string:");
    scanf("%d%d", &n, &m);
    slicestring(str, n, m);

    return 0;
}
void slicestring(char str[], int n, int m)
{
    char strpart[100];
    int i, j;
    // lil understable
    for (i = n, j = 0; i <= m; i++, j++)
    {
        strpart[j] = str[i];
    }
    strpart[j] = '\0';
    puts(strpart);
}