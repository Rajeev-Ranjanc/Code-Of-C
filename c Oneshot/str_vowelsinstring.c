// total number of vowels present in our string
#include <stdio.h>
#include <string.h>

int totalvowel(char str[]); // using character string  //string traversing
int countvowel(char str[]); // easy way

int main()
{
    char str[100];
    int vowel, n = 0;
    int lenstr, conso;
    printf("enter string:");
    fgets(str, 100, stdin);

    n = totalvowel(str);
    lenstr = strlen(str) - 1;

    vowel = countvowel(str);

    printf("\nlength of the string is:%d", lenstr);
    printf("\ntotal no of consonent:%d", (lenstr - vowel));
    printf("\ntotal number of vowel checking by character string: %d", n);
    printf("\ntotal vowels by checking by comparing one by one character: %d", vowel);

    return 0;
}
int totalvowel(char str[])
{
    // character array tfraversing
    char vowel[] = "aeiouAEIOU";
    int v = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        for (int j = 0; vowel[j] != '\0'; j++)
        {
            if (str[i] == vowel[j])
            {
                v++;
            }
        }
    }
    return v;
}

int countvowel(char str[])
{
    // by compring one by one of vowels

    int x = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'O' || str[i] == 'I' || str[i] == 'U')
        {

            x++;
        }
    }
    return x;
}
