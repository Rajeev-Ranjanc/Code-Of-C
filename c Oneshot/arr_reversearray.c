// wap to reverse a given array
// classical way
#include <stdio.h>
void reversearray(int arr[], int n);
void printarray(int arr[], int n);
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    printf("defined array is:");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n\n");
    printf("reversed array is:");
    reversearray(a, 5);
    printarray(a, 5);
    return 0;
}
void printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}
void reversearray(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int firstval = arr[i];
        int secondval = arr[n - i - 1];
        arr[i] = secondval;
        arr[n - i - 1] = firstval;
    }
}