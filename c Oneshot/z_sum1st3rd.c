//sum of the first and 3rd digit of a 3 digit numbers
#include<stdio.h>
int main(){
    int rem,n,sum=0;
    printf("enter 3-digit numbers:");
    scanf("%d",&n);
    /*
    for(i=0;i<3;i++){
        
        rem=n%10;
        sum=sum+rem;
        n=n/100;
    }
    */
    while (n!=0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/100;
    }
    printf("\nsum of the first and 3rd digit of this number is:%d",sum);
    return 0;
}