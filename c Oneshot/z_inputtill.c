//program of taking input till user doesn't enter odd nunber
#include<stdio.h>
int main(){
    int n;
    do
    {
    printf("\nn:");
    scanf("%d",&n);
    printf("\nentered number is %d",n);
    }while(n%2==0);
    printf("\nthank you!");
    
    return 0;
}