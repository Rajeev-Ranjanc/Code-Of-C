//leap year program
#include<stdio.h>
int main(){
    int year;
    printf("Year:");
    scanf("%d",&year);

    if((year%4==0 && year%100!=0) || year%400==0) {
    	
    		printf("\nLeap Year");

		
//		else{
//			printf("Non leap year");
//		}
	
    }
    else{
    	printf("Non leap Year");
	}
    return 0;
}
