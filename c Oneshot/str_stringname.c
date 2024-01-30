//printing name by using functio
#include<stdio.h>
void printname(char f[]);

int main(){

    char fname[]="rajeev ranjan";
    char lname[]="yadav";
    printname(fname);
    printf("\n");
    printname(lname);
    return 0;
}
void printname(char f[]){
    //important condition
    for(int i=0;f[i]!='\0';i++){
        printf("%c",f[i]);

    }
} 