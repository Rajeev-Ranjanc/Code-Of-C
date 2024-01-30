//Sum of n natural no using recursion
#include<stdio.h>
int calcsum(int n);
int main(){
    int result;
    // printf("n:");
    // scanf("%d",&n);
    result=calcsum(5);
    printf("\nsum is:%d",result);
    return 0;
}
int calcsum(int n){
   
    if(n==1){
        return 1;
    }
    int s=calcsum(n-1);
    int tsum=s+n;
    return tsum;
}