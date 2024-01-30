#include<stdio.h>
#include<conio.h>
int main(){
	//Find big no
	//int a=10,b=5;
	//printf("A & B:");
	//scanf("%d%d",&a,&b);
	//printf("%d",a==b);
	int myint;
	float myfloat;
	double mydouble;
	char mychar;
	printf("Sizeof Integer is %lu\n",sizeof(myint));
	printf("Sizeof Float is %lu\n",sizeof(myfloat));
	printf("Sizeof Double is %lu\n",sizeof(mydouble));
	printf("Sizeof char is %lu\n",sizeof(mychar));
	
	int a=20,b=10;
	printf("t=%d",a>b);
	return 0;
}
