//in this program we will write the code of the binary search which returns the index of present elements otherwise -1
/*
ii) Binary Search
*/
#include<stdio.h>
#include<conio.h>
int binarysearch(int nums[] , int target , int length);
int main(){
int nums[]={1,2,3,4,5,6,7,8,9};
int length = sizeof(nums)/sizeof(nums[0]);
int  target = 11;

// int n;
// printf("enter the length of the arra
// scanf("%d",&n);
// int nums[n];
// //enter the elemeents of the array
// for(int i=0;i<n;i++){
//     scanf("%d",&nums[i]);
// }
int index = binarysearch(nums , target , length);
printf("index is: %d",index);
    return 0;
}
int binarysearch(int nums[] , int target , int length){
    int start = 0;
    int end = length-1;
    while (start<=end)
    {
        int mid = start+(end-start)/2;
        if(nums[mid] == target){
            return mid;
        }
        if(nums[mid]<target){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
    }
    return -1;
    
}