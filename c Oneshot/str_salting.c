// find the salted form of a password by user if the salt is "123" & added at the end
#include <stdio.h>
#include <string.h>

void salted(char password[]);
int main()
{
    char password[50];
    printf("password:");
    scanf("%s", password);
    salted(password);

    return 0;
}
void salted(char password[])
{
    char salt[] = "123";
    char saltedpassword[100];
    strcpy(saltedpassword, password);
    strcat(saltedpassword, salt);
    printf("\nsalted password:");
    puts(saltedpassword);
}