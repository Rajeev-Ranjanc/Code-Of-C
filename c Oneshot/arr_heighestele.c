// finding the entered_no(1st/2nd etc) heighest elements of the array
//code dosen't work properly

#include <stdio.h>
int main()
{
    int temp, i, n, height;
    printf("size of the array:");
    scanf("%d", &n);
    int arr[n];
    printf("enter array elements:");
    for (i = 0; i < n; i++)
    {
        printf("a[%d]:", i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            temp = arr[i + 1];
            arr[i + 1] = arr[i];
            arr[i] = temp;
        }
    }
    printf("\nGiven Array is:");
    for (i = 0; i < n; i++)
    {
        printf("\t%d", arr[i]);
    }
    printf("\nwhich no of heightest element you want to get:");
    scanf("%d", &height);
    printf("\n%d heighest elements of the array is:%d", height, arr[n - (height)]);

    return 0;
}
