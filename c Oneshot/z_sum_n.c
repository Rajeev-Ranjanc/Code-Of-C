#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+i;
    }
 
    printf("\nsum=%d",sum);

    //printing them in reverse order
    for(i=n;i>=1;i--){
        printf("\n%d",i);
    }

return 0;

}
    