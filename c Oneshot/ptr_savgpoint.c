//sum average & multiplication using pointer: returning a function more than 1 value
#include<stdio.h>
void dowork(int a,int b, int *sum , int *product , int *average);

int main(){
    int a=5,b=8;
    int sum,product,average;
    dowork(a,b, &sum, &product, &average);
    printf("%d\t%d\t%d",sum,product,average);
    return 0;
}

void dowork(int a,int b, int *sum , int *product , int *average){
    *sum=a+b;
    *product=a*b;
    *average=a+b/2;
}