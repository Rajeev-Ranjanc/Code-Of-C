//hackerrank problem: finding maximum no among 4 number 
#include<stdio.h>
int maxoffour(int a,int b, int c, int d){
    int max=a;
    if(max<b){
        max=b;
    }
    if (max<c)
    {
        max=c;
    }
    if(max<d)        
    {
        max=d;
    }
    
    return max;
    
    
}
int main(){
    int a,b,c,d;
    printf("enter four number:");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int x=maxoffour(a,b,c,d);
    printf("\nGreatest number is :%d",x);
    return 0;
}