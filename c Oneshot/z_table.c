//Table of the number which is entered by the user
#include<stdio.h>
int main(){
    int i,n;
    printf("n:");
    scanf("%d",&n);
    for(i=1;i<=10;i++){
        printf("\n%d*%d=%d",n,i,(n*i));
    }
    return 0;
}