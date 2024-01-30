//creating a structure
#include <stdio.h>
#include <string.h>
int main()
{
    typedef struct book{
        char name[50];
        int page;
        float price; 
    }rr;
    rr a;
    a.page=50;

    a.page = 100;
    a.price = 411.5;
    strcpy(a.name, "secret seven");
    printf("%s\t%d\t%.2f", a.name, a.page, a.price);

    return 0;
}