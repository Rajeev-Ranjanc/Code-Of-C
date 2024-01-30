#include<stdio.h>
#include<string.h>
//user defined datatype
struct student{
    int roll;
    float cgpa;
    char name[25];
};


int main(){
    struct student s1;
    struct student s2;
    struct student s3;

    // printf("name:");
    // scanf("%[^\n]",s1.name);
    // printf("roll:");
    // scanf("%d",s1.roll);
    // printf("cgpa:");
    // scanf("%f",s1.cgpa);

    strcpy(s1.name,"Rajeev Ranjan");
    s1.cgpa=9.8;
    s1.roll=78;

    printf("\nfirst student info:\n");
    puts(s1.name);
    printf("%d",s1.roll);
    printf("\n%.2f",s1.cgpa);

    printf("\nsecond student info:\n");
    strcpy(s2.name,"Priyanshu Gautam");
    s2.roll=75;
    s2.cgpa=8.9;
    puts(s2.name);
    printf("%d",s2.roll);
    printf("\n%.2f",s2.cgpa);

    printf("\nthird student info:\n");
    strcpy(s3.name,"Shivang Dubey");
    s3.roll=92;
    s3.cgpa=8.6;
    puts(s3.name);
    printf("%d",s3.roll);
    printf("\n%.2f",s3.cgpa);




    return 0;
}