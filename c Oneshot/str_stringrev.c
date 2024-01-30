#include<stdio.h>
#include<string.h>
void printrev(char name[]);
int main(){
	char yournam[40];
	printf("name:");
	//scanf("%s",yournam);
	//gets(yournam);    //it is dangerous bcz it dosen't specify the size of the string
    fgets(yournam,20,stdin);
    
    puts(yournam);

	//printf("\nyour name:%s",yournam);
	//printrev(yournam);
	return 0 ;
}

void printrev(char name[]){
    int i=strlen(name);
    
    while (i>=0)
    {
        printf("%c",name[i]);
        i--;
    }
    
}
