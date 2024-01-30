//Function
#include<stdio.h>
#include<conio.h>
int add(int a, int b){
	int sum=0;
	sum=a+b;
	return sum;
	
}

void nameage(char name[],int age){
	printf("\nHello %s you are %d year old",name,age);
	return;	
}
int main(){
	int a,b,x;
	int ag=23;
	char nm[]="Rajeev Ranjan Yadav";
//	printf("Enter a and b:(Integer):");
//	scanf("%d%d",&a,&b);
//	x=add(a,b);
	nameage(nm,ag);
//	printf("Sum:%d\n",x);
	return 0;
}
