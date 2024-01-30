// Array passing in the function using function
#include <stdio.h>
// void printnumbers(int arr[], int n);
void printnumbers(int *arr, int n);
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    printnumbers(arr, 6);
    return 0;
}
// void printnumbers(int arr[],int n)
void printnumbers(int *arr, int n)
{
    for (int i = 0; i < 6; i++)
    {
        printf("%d\t", arr[i]);
    }
}