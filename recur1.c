//Recursion
//Addtion upto the entered number
#include<stdio.h>
#include<conio.h>
int addrange(int n){
	
	if(n>0){
		return n+addrange(n-1);
	}
	else{
		return 0;
	}
}
int main()
{
	
	int n,resultant;
	printf("N:");
	scanf("%d",&n);
	resultant=addrange(n);
	printf("\n%d",resultant);
	return 0;
}
