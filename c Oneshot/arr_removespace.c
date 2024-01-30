//remove whitespaces from a character type array
//but now working fir too many soaces
#include<stdio.h>
void whitespace(char str[]);
int main(){
    char st[]="Rajeev        Ranjan Yadav";
    whitespace(st);
    return 0;
}
void whitespace(char str[]){
    int i,j;
    for(i=0;str[i]!='\0';i++){
        if(str[i]==' '){
            for(j=i;str[j]!='\0';j++){
                str[j]=str[j+1];
            }
        }
    }
   
    puts(str);
}