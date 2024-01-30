//Break & Continue Statement
#include<stdio.h>
#include<conio.h>
int main(){
	int i,n;
	printf("N:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("%d\n",i);
		if(i==4){
		
			//break;
			continue;
			printf("madarchod statement%d\n",i);
			
		}
	}
	
	return 0;
}
