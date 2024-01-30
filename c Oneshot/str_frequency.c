// checking frequency of any character in a string
#include <stdio.h>

int charfrequency(char str[], char c);
void printstring(char str[]);
int main()
{
    char ch;
    char str[100];
    printf("enter string:");
    fgets(str, 100, stdin);

    printf("enter character whose frequency you want:");
    scanf("%c", &ch);

    int x = charfrequency(str, ch);
    printf("frequency of this character:%d", x);

    return 0;
}

int charfrequency(char str[], char c)
{

    int f = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == c)
        {
            f++;
        }
    }

    return f;
}