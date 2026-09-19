#include <stdio.h>
#include <string.h>

void reverse(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;

    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    // Test Case 1: Typical
    char str1[] = "hello";
    reverse(str1);
    printf("Test Case 1: %s\n", str1);

    // Test Case 2: Edge case - single character
    char str2[] = "a";
    reverse(str2);
    printf("Test Case 2: %s\n", str2);

    return 0;
}