//sorting an array in ascending order
//finding minimum & maximum elements of an array
#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 5448558, 11, 252225255};
    int i, temp;
    int size = sizeof(arr) / sizeof(arr[0]);
    for (i = 0; i < 5; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            temp = arr[i + 1];
            arr[i + 1] = arr[i];
            arr[i] = temp;
        }
    }
    printf("%d\t%d", arr[0], arr[size - 1]);
    return 0;
}
