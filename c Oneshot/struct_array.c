// Array of the structure
#include <stdio.h>
struct student
{
    char name[20];
    int roll;
    float cgpa;
};
int main()
{
    //struct student ece[100];
    // ece[0].roll=78;
    // strcpy(ece[0].name,"Rajeev");
    // ece[0].cgpa=9.8;

    // same above intialisation within a single line
    struct student ece= {"rajeev", 78, 9.8};
    struct student ec = {"Sanjeev", 788, 8.9};

    printf("name:%s\n", ece.name);
    printf("roll:%d\n", ece.roll);
    printf("cgpa:%.2f", ece.cgpa);

    printf("\n");
    printf("name:%s\n", ec.name);
    printf("roll:%d\n", ec.roll);
    printf("cgpa:%.2f", ec.cgpa);

    return 0;
}