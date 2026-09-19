#include <stdio.h>
#include <string.h>

void longestCommonPrefix(char *strs[], int n) {
    int i = 0;

    while (strs[0][i] != '\0') {
        for (int j = 1; j < n; j++) {
            if (strs[j][i] != strs[0][i]) {
                break;
            }

            if (j == n - 1)
                i++;
        }

        if (strs[1][i] != strs[0][i])
            break;
    }

    printf("Longest Common Prefix: ");

    for (int j = 0; j < i; j++)
        printf("%c", strs[0][j]);

    printf("\n");
}

int main() {
    // Test Case 1: Typical
    char *strs1[] = {"flower", "flow", "flight"};
    printf("Test Case 1:\n");
    longestCommonPrefix(strs1, 3);

    // Test Case 2: Edge case - no common prefix
    char *strs2[] = {"dog", "racecar", "car"};
    printf("Test Case 2:\n");
    longestCommonPrefix(strs2, 3);

    return 0;
}