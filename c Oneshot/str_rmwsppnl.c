//removing white space from the string and if there's space print a single new line
#include <stdio.h>
int main()
{
    char str[] = "rajeev ranjan      yadav   banka   bihar  ";
    int c;
    for (int i = 0; str[i] != '\0'; i++)
    {

        if (str[i] == ' ')
        {
            if (c >= 1)
            {
                continue;
            }
            printf("\n");
            c++;
        }

        else if (str[i] != ' ')
        {
            printf("%c", str[i]);
            c = 0;
        }
    }

    // printf("\ntotal space is:%d",c);

    return 0;
}