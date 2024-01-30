// wap to count all odd number in an array
/*
#include<stdio.h>
int countodd(int arr[],int n);
int main(){
    int a[]={1,2,34,5,6,7,8,9};
    int x=countodd(a,8);
    printf("\ntotal odd nos:%d",x);
    return 0;
}
int countodd(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            count++;
        }

    }
    return count;
}
*/
// same above program by passing the address of the array
#include <stdio.h>
int countodd(int *ptr, int n);
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 13, 17, 19, 15};
    int x = countodd(arr, 15);
    printf("\n\ntotal odd numbers in the array is:%d", x);
    return 0;
}
int countodd(int *ptr, int n)
{
    int count = 0;
    printf("\nodd numbers are:\n");
    for (int i = 0; i <n; i++)
    {
        if (ptr[i] % 2 != 0)
        {
            printf("%d\t", ptr[i]);
            count++;
        }
    }
    return count;
}