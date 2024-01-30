//calculatring the length of the string
#include<stdio.h>
#include<string.h>
void printname(char str[]);
int countname(char str[]);
int main(){
    char name[100];
    printf("entre name:");
    fgets(name,100,stdin);

    printname(name);
    printf("\nlength of your name:%d",countname(name));
    return 0;
}
void printname(char str[]){
    for(int i=0;str[i]!='\0';i++){
        printf("%c",str[i]); 
    }
}
int countname(char str[]){
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    return count-1;
}