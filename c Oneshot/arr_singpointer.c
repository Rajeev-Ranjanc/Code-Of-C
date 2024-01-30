//traverse an array using pointer concept;
//address of an array and first element of the array is same
#include<stdio.h>
int main(){
    
    int aadhar[5];
    int *ptr=&aadhar;
    for(int i=0;i<5;i++){
        printf("%d index element:",i);
        scanf("%d",(ptr+i));
    }
    //output
    printf("\noutput:\n");
    for(int i=0;i<5;i++){
        printf("%d index:%d\n",i,*(ptr+i));
    }
    return 0;
}