// Convert the lowercase to uppercase letter
#include <stdio.h>
#include <string.h>
void convertcapital(char str[]);
void convertsmall(char str[]);
int main()
{
    
    char str[50];
    printf("enter string:");
    //scanf("%[^\n]s",str);
    fgets(str,50,stdin);

    strtrim(str);
    puts(str);
    //convertcapital();
    //convertsmall(str);
    return 0;
}
void convertcapital(char str[])
{
    char capital[50];
    //puts(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        capital[i] = str[i] - 32;
    }
    printf("converted in capital letter:");

    puts(capital);
}
void convertsmall(char str[])
{

    char small[50];
    for (int i = 0; str[i] != '\0'; i++)
    {
        small[i] = str[i] + 32;
    }
    printf("\nconverted in small letter:");
    puts(small);
}