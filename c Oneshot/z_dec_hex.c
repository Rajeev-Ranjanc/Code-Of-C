#include<stdio.h>
int main(){
    int n,i;
    int rm[5];
    printf("enter decimal number:");
    scanf("%d",&n);
    for(i=0;n>0;i++){
        rm[i]=n%16;
        n=n/16;
    }
    for(i = i - 1; i >= 0; i--){
        
        printf("%d",rm[i]);
    }
return 0;
}
