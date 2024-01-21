// e. Binary Search
#include <stdio.h>

int binarySearch(int arr[], int key, int low, int high) {
    if (low > high) {
        return -1; // Element not found
    } else {
        int mid = (low + high) / 2;
        if (arr[mid] == key) {
            return mid; // Element found at mid
        } else if (arr[mid] > key) {
            return binarySearch(arr, key, low, mid - 1);
        } else {
            return binarySearch(arr, key, mid + 1, high);
        }
    }
}

int main() {
    int size, key;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter sorted elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    int result = binarySearch(arr, key, 0, size - 1);

    if (result != -1) {
        printf("Element %d found at index %d\n", key, result);
    } else {
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}
