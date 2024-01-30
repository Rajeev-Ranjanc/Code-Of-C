//find quiotent and remindre
#include<stdio.h>
int main(){
	int n,q,r,div;
	printf("n:");
	scanf("%d",&n);
	printf("\ndivisior:");
	scanf("%d",&div);
	r=n%div;
	q=n/div;
	printf("\nquotent:%d",q);
	printf("\nreminder:%d",r);
	printf("\n");
	return 0;
}
