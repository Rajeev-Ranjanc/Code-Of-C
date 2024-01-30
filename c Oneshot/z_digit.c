// Given number is digit or not
#include <stdio.h>
int main()
{
    char c;
    printf("enter character:");
    scanf("%c", &c);
    if (c > '0' && c < '9')
    {
        printf("entered character is digit.");
    }
    else
    {
        printf("entered charcter isn't digit");
    }

    return 0;
}