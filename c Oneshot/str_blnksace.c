//removing blank spaces from the string but don't get it


#include<stdio.h>
#include<string.h>
int main(){

    char name[]="rajeev ranjan yadav";
    int i,j=0;
    for(i=0;name[i]!='\0';i++){
        if(name[i]!=' '){
            name[j]=name[i];
            j++;
        }
        
    }
    name[j]='\0';
    puts(name);
    return 0;
}

/*
#include<stdio.h>
int main(){
    char str[]="rajeev   ranjan yadav";
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        
        if(str[i]!=' '){
            printf("%c",str[i]);
        }
        else{
            count++;
        }
    }

        printf("\ntotal space is:%d",count);

    return 0;
}

*/