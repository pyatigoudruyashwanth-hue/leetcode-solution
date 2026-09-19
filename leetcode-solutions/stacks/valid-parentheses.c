#include <stdio.h>

#define MAX 100

int isValid(char str[]) {
    char stack[MAX];
    int top = -1;

    for (int i = 0; str[i] != '\0'; i++) {

        if (str[i] == '(' || str[i] == '[' || str[i] == '{') {
            stack[++top] = str[i];
        }
        else if (str[i] == ')' || str[i] == ']' || str[i] == '}') {

            if (top == -1)
                return 0;

            char open = stack[top--];

            if ((str[i] == ')' && open != '(') ||
                (str[i] == ']' && open != '[') ||
                (str[i] == '}' && open != '{'))
                return 0;
        }
    }

    return top == -1;
}

int main() {
    // Test Case 1: Typical
    printf("Test Case 1: %s\n",
           isValid("{[()]}") ? "Valid" : "Invalid");

    // Test Case 2: Edge case - mismatched brackets
    printf("Test Case 2: %s\n",
           isValid("{[(])}") ? "Valid" : "Invalid");

    return 0;
}