//Array basics to adv...


#include<stdio.h>
#include<conio.h>
int main(){
	/*
	//Single dimensional array
	int n,i,b=0;
	int a[n];
	
	//Input array elements from keyboard:
	printf("Enter the size of the array:");
	scanf("%d",&n);

	printf("\n");
	
	while(b<n){
		printf("Enter %d Elements of the array:",b);
		scanf("%d",&a[b]);
		b++;
	}
	//Printing elements of the array
	for(i=0;i<=n;i++){
		printf("%d\t",a[i]);
	}
	
	*/
	
	
	
	//multidimensional Array
	int matrixarr[2][3]={{10,20,30},{40,50,60}};
	int i,j;
	//int arraylength1=sizeof(matrixarr)/sizeof(matrixarr[0]);
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
				printf("A[%d][%d]:%d",i,j,matrixarr[i][j]);
				printf("\t");
		}
		printf("\n");
	}
	return 0;
}
