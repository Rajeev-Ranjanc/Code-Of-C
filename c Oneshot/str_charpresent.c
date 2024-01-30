// checking the character is present in the string or not
#include<stdio.h>
#include<string.h>
void charpresent(char str[],char ch);
int main(){
    char name[]="rajeev ranjan yadav";
    char ch;
    printf("enter character which you want to search:");
    scanf("%c",&ch);
    charpresent(name,ch);

    return 0;
}
void charpresent(char str[],char ch){
    int i,c=0;
    for ( i = 0; str[i]!='\0'; i++)
    {
        if(str[i]==ch){
            c++;
        }
    }
    if(c>0){
        printf("character is present");
    }
    else{
        printf("character isn't present");
    }
    
}