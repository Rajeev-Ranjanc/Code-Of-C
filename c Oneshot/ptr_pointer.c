//Pointer variable
#include<stdio.h>
int main(){
    int age=22;
    int *ptr=&age;//means value at address of
    int _age=*ptr;
    printf("%d",_age);
    printf("\n%p",&age);
    //printf("\n%p",ptr);
    printf("\n%u",*ptr);
    printf("\n%p",&ptr);
    return 0;


}