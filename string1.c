//C string
#include<stdio.h>
#include<conio.h>
int main(){
	int i;
	char str1[20];
	char greet[]="Good Morning";
	char college[]="MNNIT College Allahabad,Prayagraj";
	printf("%s",greet);
	printf("\n");
	
	/*
	//printf("%lu",greet); //printing something integer value same for all the time
	
	printf("%c",college[0]); //to print a single character
	
	int arrlen=sizeof(greet)/sizeof(greet[0]); //Finding size of the array(Greet)
	printf("%d\n",arrlen);
	
	*/
	
	/*
	//through loop
	for(i=0;i<=arrlen;i++){
		printf("%c\t",greet[i]);
	}
	*/
	
	
	/*
	//Modification of strings
	printf("\nOld String is:%s",college);
	
	college[0]='_';
	college[1]='^';
	
	printf("\nNew String is:%s",college);
	
	*/
	
	
	/*
	//input of string from user using gets(arrayname);
	printf("Enter String:");
	gets(str1);
	printf("%s",str1);
	
	*/
	
	//another way to create character array string
	char str2[]={'H','e','l','l','o','\0'};//in this method we sould write \0
	char str3[]="Hello";//in this \0 is written by c compiler
	printf("%s\n",str2);
	printf("Size of %s is:%d\n",str2,sizeof(str2));
	
	printf("%s\n",str3);
	printf("Size of %s is:%d",str3,sizeof(str3));

	
	return 0;
}

