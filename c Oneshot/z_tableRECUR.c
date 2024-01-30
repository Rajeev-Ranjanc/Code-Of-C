 #include<stdio.h>
#include<math.h>
void recur();
int main(){
    int n=10;
    recur(n,1);
}
void recur(int n , int a){
   if(a>10){
    return;
   }
   printf("%d\n",n*a);
   recur(n,a+1);
}
 
 
 
 