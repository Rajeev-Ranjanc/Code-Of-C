//Switch case program
#include<stdio.h>
#include<conio.h>
int main(){
	int n;
	printf("N:");
	scanf("%d",&n);
	switch(n){
		case 1:
			printf("Monday");
			break;
		default:
			printf("Invalid input");
	}
	
	return 0;
}
