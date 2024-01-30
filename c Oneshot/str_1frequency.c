//program to check the frequency of a character in an string
#include<stdio.h>
#include<string.h>
int main(){

    char str[25];

    int i,count=0;
    char ch;
    printf("enter string:");
    gets(str);
    printf("\nenter character:");
    scanf("%c",&ch);
    for(i=0;i<strlen(str);i++){
        if(str[i]==ch){
            
            count++;
        }
        
    }
    printf("\nTotal frequency is:%d",count);
    return 0;
}