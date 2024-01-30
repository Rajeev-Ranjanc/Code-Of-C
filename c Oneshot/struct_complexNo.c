#include<stdio.h>
#include<math.h>
struct complex_no{
    int realpart;
    int imgpart;
};
int main(){
struct complex_no str1;
int real,img;
int magnitude;
printf("enter real & img part of the complex num:");
scanf("%d%d",&str1.realpart,&str1.imgpart);
printf("Complex No: %d+%di",str1.realpart,str1.imgpart);
magnitude=sqrt(str1.realpart*str1.realpart+str1.imgpart*str1.imgpart);
printf("\nMagnitude:%d",magnitude);
}