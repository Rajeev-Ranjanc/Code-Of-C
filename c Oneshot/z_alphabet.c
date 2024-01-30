// cheking the  alphabet is upper or small
#include <stdio.h>
int main()
{
    char c;
    printf("enter character:");
    scanf("%c", &c);
    if (c >= 'A' && c <= 'Z')
    {
        printf("\ncapital letter");
    }
    else if (c >= 'a' && c <= 'z')
    {
        printf("\nsmall letter");
    }
    else
    {
        printf("\ninvalid input");
    }
    return 0;
}