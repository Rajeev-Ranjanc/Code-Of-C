//String function and input
#include<stdio.h>
#include<conio.h>
#include<string.h>
#define MAX_LIMIT 20
int main(){
	char alphabet[50]={"abcdefghijklmnopqrstuvwxyz"};
	char str[]={"Hello MNNIT Allahabad"};
	char str2[]={"Good Morning"};
	char str3[]={" Allahabad"};
	char str4[20];
	//input of the string
	//printf("Enter String:");
	//scanf("%s",str);//blank after space
	//gets(str);//consider whitespace as a character
	//scanf("%[^\n]%*c",str); // it wil continue until new line
	//fgets(str,MAX_LIMIT,stdin);
	//printf("%s",str);	
	
	
	//String Function
	printf("The Length of %s is:%d\n",str,strlen(str));//Length of the dtring
	printf("Combined String is: %s",strcat(str2,str3));//concatination of the string
	strcpy(str4,str3);//copies str3 into str4
	printf("\nCopied String:%s",str4);
	
	return 0;
}
