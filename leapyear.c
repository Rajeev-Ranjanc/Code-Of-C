//to check wether the given year is leap or not
#include<stdio.h>
#include<conio.h>
int main(){
	int year;
	printf("Year:");
	scanf("%d",&year);
/*	if((year%400==0) || (year%100!=0) && (year%4==0)){
		printf("Leap Year");
	}
	else{
		printf("non leap yaer");
	}
	*/
//	(year%400==0 ||(year%100!=0 && year%4==0))?printf("Leap Year"):printf("non leap year");
	return 0;
}
