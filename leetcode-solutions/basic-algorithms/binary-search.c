#include <stdio.h>

int binarySearch(int arr[], int n, int target) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}

int main() {
    // Test Case 1: Typical
    int arr1[] = {1, 3, 5, 7, 9, 11};
    printf("Test Case 1: Index = %d\n",
           binarySearch(arr1, 6, 9));

    // Test Case 2: Edge case - element not found
    int arr2[] = {2, 4, 6};
    printf("Test Case 2: Index = %d\n",
           binarySearch(arr2, 3, 5));

    return 0;
}