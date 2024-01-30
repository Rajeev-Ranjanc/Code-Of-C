#include<stdio.h>
int main(){

    int arr[]={1,2,3,4,5};
    int i;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<size;i++){
        if(i%2!=0){
            continue;
        }
        else{
        printf("%d ",arr[i]);
        }
    }
}