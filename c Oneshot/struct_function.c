// passing a structure in a function
#include <stdio.h>
#include <string.h>

struct student
{
    int roll;
    float cgpa;
    char name[50];
};
void printinfo(struct student s1);
int main()
{
    struct student s1 = {78, 9.8, "rajeev ranjan"};
    printinfo(s1);

    return 0;
}
void printinfo(struct student s1)
{
    printf("\nstudent info:");
    printf("\nname:%s", s1.name);
    printf("\nroll:%d", s1.roll);
    printf("\nPointer:%.2f", s1.cgpa);
}
