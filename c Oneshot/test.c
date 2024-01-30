#include<stdio.h>
#include<math.h>
void recur();
int main(){
   int num=7;
   int rem=0;
   int place=1;
   int bin=0;
 while(num)  
    {  
        rem   = num % 2;  
        num   = num / 2;  
        bin   = bin + (rem * place);  
        place = place * 10;  
    }  
    printf("%d\n", bin);  
}