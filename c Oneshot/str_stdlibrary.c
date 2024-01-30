//standard library in c 
#include<stdio.h>
#include<string.h>
int main(){
    //strlen: excludes the \0
    // char name[]="rajeev ranjan yadav";
    // printf("length of your name:%d",strlen(name));
    // //strcpy(newstr,oldstr):used to copy one string to another;
    // char name2[50];
    // strcpy(name2,name);
    // printf("\ncopied string:%s",name2);
    
    //strcat(fstr,sstr);
    // char f_str[]="hello";
    // char s_str[]="world";
    // printf("%s",strcat(f_str,s_str));

    //strcmp(fstr,sstr): 
    char f[]="banana";
    char s[]="apple";
    printf("%d",strcmp(f,s));
     printf("\n%d",strcmp(s,f));

    return 0;

}