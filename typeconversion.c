#include<stdio.h>

int main(){
	int a=5,b=2;
	float s;
	//explicit conversion
	s= (float)a/b;
	printf("result with zero precision=%.2f",s);
	printf("\n");
	printf("result=%f",s);
	return 0;
	
}
