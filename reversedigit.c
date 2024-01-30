//reveersing a digit
#include<stdio.h>
int main(){
    int n,rem;
    printf("n:");
    scanf("%d",&n);
    printf("\nreversed number is:");
    while (n!=0)
    {
        rem=n%10;
        printf("%d",rem);
        n=n/10;

    }
    
    return 0;
}