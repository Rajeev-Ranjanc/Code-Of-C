//Structure
#include<stdio.h>
#include<conio.h>
struct mystructure{
	int age;
	char name[25];
	
};

int main(){
	struct mystructure s1={22,"rajeev ranjan yadav"
	};
	
	printf("%d\t %s",s1.age,s1.name);
	
	return 0;
}



/*
int main(){
	
	struct mystructure s1;
	
	printf("Age:");
	scanf("%d",&s1.age);
	printf("\n%d",s1.age);
	return 0;
}

*/

/*
//In case of string
struct myStructure {
  int myNum;
  char myLetter;
  char myString[30]; // String
};

int main() {
  struct myStructure s1;

  // Assign a value to the string using the strcpy function
  strcpy(s1.myString, "Rajeev Ranjan");

  // Print the value
  printf("My string: %s", s1.myString);

  return 0;
}
*/
