//input till user don't enter multiple of 7
#include<stdio.h>
int main(){
    int n;
    /*
    do
    {
        printf("\nenter number:");
        scanf("%d",&n); 
        printf("\nhello");
    } while (n/7==0);
    printf("thank you");
*/
    //second way
    do
    {
        printf("\nenter number:");
        scanf("%d",&n);
        if(n%7==0){
            printf("thank you");
            break;
        }
    } while (1);
    return 0;
}