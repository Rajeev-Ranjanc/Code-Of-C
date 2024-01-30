#include<stdio.h>
int main(){
    float price=100.5;
   float *ptr= &price;
   float **pptr=&ptr;
   // printf("%d",*(&pptr));
    printf("%d",**pptr);
    return 0;
}