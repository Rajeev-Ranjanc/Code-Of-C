//recursion practice
#include<stdio.h>
void hw(int n);
int main(){ 
    int n;
    printf("n:");
    scanf("%d",&n);
    hw(n);
    return 0;
}
void hw(int n){
    if(n==0){
        return;
    }
    printf("hello world\n");
    hw(n-1);
}