//typedef keyword
#include<stdio.h>

typedef struct computersciencestudent
{
    int roll;
    float cgpa;
    char name[35];
}cse;
int main(){
    cse s1={78,9.8,"rajeev ranjan"};
    printf("name:%s\npointer:%.2f",s1.name,s1.cgpa);
    return 0;
}
