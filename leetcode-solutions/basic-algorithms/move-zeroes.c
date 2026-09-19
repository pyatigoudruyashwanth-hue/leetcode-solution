#include <stdio.h>

void moveZeroes(int arr[], int n) {
    int position = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[position++] = arr[i];
        }
    }

    while (position < n) {
        arr[position++] = 0;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
}

int main() {
    // Test Case 1: Typical
    int arr1[] = {0, 1, 0, 3, 12};
    moveZeroes(arr1, 5);

    printf("Test Case 1: ");
    printArray(arr1, 5);

    // Test Case 2: Edge case - all zeroes
    int arr2[] = {0, 0, 0};
    moveZeroes(arr2, 3);

    printf("Test Case 2: ");
    printArray(arr2, 3);

    return 0;
}