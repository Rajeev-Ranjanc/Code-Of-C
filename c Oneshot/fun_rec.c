//Factorial using recursion
/*
#include<stdio.h>
long fact(int n);
int main(){
    int a,n;
    printf("n:");
    scanf("%d",&n);
    a=fact(n);
    printf("%d is factorial",a);
    return 0;
}
long fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    return fact(n-1)*n;

}
*/

//Second way
#include<stdio.h>
int facto(int n);
int main(){
    int cal;
    cal=facto(5);
    printf("%d is the factorial of %d",facto(5),5);
    return 0;
}

int facto(int n){
    if(n==0){
        return 1;
    }
    int fact=facto(n-1);
    int totalfact=fact*n;
    return totalfact;
}