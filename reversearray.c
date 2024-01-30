#include<stdio.h>
void rarray(int *arr,int n);
void printarray(int *arr , int n);
int main(){
	int a[]={1,2,3,4,5,6,7,8,9,10};
	printarray(a,10);
	rarray(&a,10);
	printf("\n");
	printarray(a,10);
	printf("\n");
	return 0;


}
void rarray(int *arr,int n){
	for(int i=0;i<n/2;i++){
		int firstval=arr[i];
		int lastval=arr[n-i-1];
		arr[i]=lastval;
		arr[n-i-1]=firstval;
	}
}
void printarray(int *arr,int n){
	for(int i=0;i<n;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
}

