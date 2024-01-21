// first question
/*
WAP to implement
i) Linear Search

*/
#include <stdio.h>
#include <stdlib.h>
int linearSearch(int nums[] , int target , int length);
int main()
{
    int nums[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int target = 2;

    int length = sizeof(nums) / sizeof(nums[0]);

    int index = linearSearch(nums, target, length);

    printf("index of target element is: %d", index);
    return 0;
}
int linearSearch(int nums[], int target, int length)
{
    // traverse the array one by one

    for (int i = 0; i < length; i++)
    {
        // if element is present in the array return the index of the array
        if (nums[i] == target)
        {
            return i;
        }
    }
    return -1;
}