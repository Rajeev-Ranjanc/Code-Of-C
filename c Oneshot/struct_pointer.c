//pointer in structure
struct student{
    int roll;
    float cgpa;
    char name[25];

};
#include<stdio.h>
int main(){
    struct student s1={78,9.8,"rajeev ranjan"};
    printf("roll no:%d",s1.roll);
    struct student *ptr;
    ptr=&s1;
    printf("\nname:%d",ptr->name);
    printf("\ncgpa:%.2f",(*ptr).cgpa);
    return 0;
}