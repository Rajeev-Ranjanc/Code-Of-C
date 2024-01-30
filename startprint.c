#include<stdio.h>
int main(){
	int i,j,n;
	//i=0,j=0;
	printf("n:");
	scanf("%d",&n);
	/*
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf("*",j);
		}
		printf("\n");
	}
	*/
	for(i=n;i>=1;i--){
		for(j=1;j<=i;j++){
			//printf("%d",j);
			printf("*",j);
		}
		printf("\n");
	}
	printf("\nhello");
	return 0;
}
