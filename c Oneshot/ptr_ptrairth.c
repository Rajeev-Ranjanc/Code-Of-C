//pointer arithmetic;
#include<stdio.h>
int main(){
    // int age;
    // int *ptr;
    // printf("ptr=%u",ptr);
    // ptr++;
    // printf("\nptr=%u",ptr);
    // ptr--;
    // printf("\nptr=%u",ptr);

    int age;
    int _age;
    int *ptr=&age;
    int *ptr1=&_age;
    printf("difference:%u",ptr-ptr1);
    printf("\ncomparison:%u",ptr==ptr1);
    return 0;
}