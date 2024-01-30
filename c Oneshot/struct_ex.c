// #include<stdio.h>
// #include<string.h>
// struct person{
//     char name[50];
//     int saary;
//     int age;

// };

// int main(){
//     struct person p1;
//     struct person p2;
//     strcpy(p1.name,"Rajeev Ranjan Yadav");
//     p2.age=23;
//     printf("%s",p1.name);
//     printf("\n%d",p2.age);
//     return 0;

// }

// 1.Enter adress(house no,block,city,state) of 5 pepole
#include <stdio.h>
#include <string.h>
struct address
{
    int house_no;
    int block;
    char city[20];
    char state[28];
};
void printinfo(struct address add);
void inputinfo(struct address add);

int main()
{
    struct address add[5];
    // inputinfo(add); //not working for string

    // for person 1
    printf("enter address for person 1:\n");
    scanf("%d", &add[0].house_no);
    scanf("%d", &add[0].block);
    scanf("%s", add[0].city);
    scanf("%s", add[0].state);

    // for person 2
    printf("enter address for person 2:\n");
    scanf("%d", &add[1].house_no);
    scanf("%d", &add[1].block);
    scanf("%s", add[1].city);
    scanf("%s", add[1].state);

    printinfo(add[0]);
    printinfo(add[1]);
    return 0;
}
void printinfo(struct address add)
{

    printf("\naddress is : %d , %d , %s , %s", add.house_no, add.block, add.city, add.state);
}

void inputinfo(struct address add)
{
    printf("house_no:");
    scanf("%d", &add.house_no);
    printf("block_no:");
    scanf("%d", &add.block);
    printf("city:");
    scanf("%s", add.city);
    printf("state:");
    scanf("%d", add.state);
}