//IF else shorthand
#include<stdio.h>
#include<conio.h>
int main(){
	int time;
	printf("Time(HH):");
	scanf("%d",&time);
	
	(time<18)?printf("Good day"):printf("Good evening");
	return 0;
}
