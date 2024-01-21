// d. Linear Search
#include <stdio.h>

int linearSearch(int arr[], int key, int size, int index) {
    if (index == size) {
        return -1; // Element not found
    } else if (arr[index] == key) {
        return index; // Element found at index
    } else {
        return linearSearch(arr, key, size, index + 1);
    }
}

int main() {
    int size, key;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    int result = linearSearch(arr, key, size, 0);

    if (result != -1) {
        printf("Element %d found at index %d\n", key, result);
    } else {
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}
