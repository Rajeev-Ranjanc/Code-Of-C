#include<stdio.h>
#include<conio.h>
int main(){
	int age;
	printf("Age:");
	scanf("%d",&age);
	if(age<18){
		printf("Focus on your studies and skill development");
		
	}
	else if(age>18 && age<50){
		printf("Kama le");
	}
	else{
		printf("Chant the name of Mahadev :)");
	}
	
	
	
	return 0;	
}
