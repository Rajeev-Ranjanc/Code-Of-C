#include<stdio.h>
int binarysearch(int arr[],int target);
int main(){
   int arr[]={1,2,3,4,5,6,7,8,9,10};
   int target=8;
   printf("%d",binarysearch(arr,target));


    return 0;
}
int binarysearch(int arr[],int target){
    int start=0;
    int end=9;
    int mid=start+mid/2;
    while (start<=end)
    {
        if(target<arr[mid]){
            end=mid-1;
        }
        else if(target>arr[mid]){
            
            start=mid+1;

        }
        else{
            return mid;
        }
    }
    

}