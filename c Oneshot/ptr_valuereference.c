//Call by value and call by reference
#include<stdio.h>
void square(int n);
void _square(int* n);
int main(){
    int number;
    printf("number:");
    scanf("%d",&number);
    square(number);
    printf("n:%d\n",number);
    _square( &number);
    printf("\nn:%d",number);

    return 0;
}
//call by value
void square(int n){
    n=n*n;
    printf("square:%d\n",n);

}
//call by reference
void _square(int* n){
    *n=(*n) * (*n);
    printf("square:%d\n",*n);
}