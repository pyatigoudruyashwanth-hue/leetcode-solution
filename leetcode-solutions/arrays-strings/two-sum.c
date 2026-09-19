#include <stdio.h>

void twoSum(int nums[], int n, int target) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] + nums[j] == target) {
                printf("Indices: %d, %d\n", i, j);
                return;
            }
        }
    }
    printf("No solution found\n");
}

int main() {
    // Test Case 1: Typical
    int a[] = {2, 7, 11, 15};
    printf("Test Case 1:\n");
    twoSum(a, 4, 9);

    // Test Case 2: Edge case - duplicates
    int b[] = {3, 3};
    printf("Test Case 2:\n");
    twoSum(b, 2, 6);

    return 0;
}