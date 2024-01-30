//String Function
#include<stdio.h>
#include<string.h>
int main(){
	
	/*
	char alphabet[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char str1[50]={"Good"};
	char str[]={" Morning"};
	
	strcat(str1,str);//concatinate the second string in the first one
	printf("%s\n",str1);
	
	printf("%d\n", strlen(alphabet));   
	printf("%d\n", sizeof(alphabet));
	
	//comparing the string
	char greet[20]={"Hello!"};
	char greet2[20]={"Hello!"};
	char greet3[20]={"Hiiii"};
	
	printf("%d\n",strcmp(greet,greet2));
	  
	  */
	  
	//User Input
	char name[25];
	printf("Name:");
	scanf("%s\n",&name);//spaces consider as terminating point
	printf("Hello %s",name);
	   
	return 0;
}
