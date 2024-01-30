//accessing pointer vRIABLES
#include<stdio.h>
int main(){
    int x;
    int *ptr;

    ptr=&x;
    *ptr=0;
    printf("\n%d",x);
    printf("\n%d",*(ptr));

    *ptr +=5;
    printf("\n%d",*ptr);

    (*ptr)++;
    printf("\n%d");
    return 0;
}