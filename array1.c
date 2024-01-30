//Arrays and finding length of array with the help of sizeof function.
//Logical
#include<stdio.h>
int main(){
	int mynumbers[5]={1,2,3,4,5};
	int i=0;
/*
	//using sizeofoperator
	int arraylength=sizeof(mynumbers)/sizeof(mynumbers[0]);//Idea boom ;)
	printf("Size of array using sizeof function is:%d\n",arraylength);
*/
	//using pointer
	int lengtharr=*(&mynumbers+1)-mynumbers;
	printf("length of array using pointer:%d\n",lengtharr);
	
	//using loop
	//by creating afunction and pass array in that functioon and count all elements one by one 
	
	//printf("Size Of the array is:%d\n",sizeof(mynumbers));	

/*
	for(i=0;i<arraylength;i++){
		printf("Array elements are:%d\n",mynumbers[i]);
	}
*/
	return 0;
}
