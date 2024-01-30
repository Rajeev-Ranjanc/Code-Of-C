//Pointer
#include<stdio.h>
#include<conio.h>

int main(){
	
	/*
	int myage=23;
	int* ptr=&myage;
	printf("%d\n",myage);
	
	printf("%p\n",&myage);
	
	printf("%p\n",ptr);
	
	*/
	
	/*
	//pointer Array
	int mynumber[5]={10,20,30,40,50};
	int i=0;
	
	printf("%p\n",mynumber);
	printf("%p\n",&mynumber[0]);
	
	printf("%d\n",*mynumber);//print first elements of the array

	for(i=0;i<5;i++){
	//	printf("%d\n",mynumber[i]);//simple array
	
	printf("%d\n",*(mynumber+i));//printing rest of the elements through array

	}
	*/
	//fresh
	char alphabet[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t'
					,'u','v','w','x','y','z'};
					
	int i;
	//int size=sizeof(alphabet)/alphabet[0];
	//printf("%d\n",size);
//	for(i=0;i<26;i++){
//		printf("%c\t",*(alphabet+i));
//	}

/*
	printf("%d\n",&alphabet);//Tells Address Of the array //printf("%p\n",alphabet);
	printf("%d\n",&alphabet[0]);//Adress if the firts elements of the array 
	//printf("%p\n",&alphabet[0);
*/

	printf("%c\n",*&alphabet[0]);
	//change the first array elements
	*alphabet='52';
	printf("%c",*&(alphabet[0]));	
	
	
	return 0;
}
