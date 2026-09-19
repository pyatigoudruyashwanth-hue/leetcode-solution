#include <stdio.h>
#include <string.h>

int isAnagram(char s[], char t[]) {
    int count[256] = {0};

    if (strlen(s) != strlen(t))
        return 0;

    for (int i = 0; s[i] != '\0'; i++) {
        count[(unsigned char)s[i]]++;
        count[(unsigned char)t[i]]--;
    }

    for (int i = 0; i < 256; i++) {
        if (count[i] != 0)
            return 0;
    }

    return 1;
}

int main() {
    // Test Case 1: Typical
    printf("Test Case 1: ");
    printf("%s\n", isAnagram("listen", "silent") ? "Valid Anagram" : "Not Anagram");

    // Test Case 2: Edge case - different lengths
    printf("Test Case 2: ");
    printf("%s\n", isAnagram("rat", "car") ? "Valid Anagram" : "Not Anagram");

    return 0;
}