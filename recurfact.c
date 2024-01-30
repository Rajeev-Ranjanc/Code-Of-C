//Factorial using recursion
#include<stdio.h>
#include<conio.h>
long facto(int n){
	
	if(n>0){
		return n*facto(n-1);
	}
	else{
		return 1;
	}
}
int main(){
	int n=0,fact=1;
	printf("N:");
	scanf("%d",&n);
	fact=facto(n);
	printf("\nFactorial:%d",fact);
	return 0;
}
