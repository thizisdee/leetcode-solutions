#include <stdio.h>
#include <string.h>

int isValid(char s[]) {
    char stack[1000];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++) {
        char c = s[i];

        if (c == '(' || c == '{' || c == '[') {
            stack[++top] = c;
        }
        else {
            if (top == -1)
                return 0;

            char opening = stack[top--];

            if ((c == ')' && opening != '(') ||
                (c == '}' && opening != '{') ||
                (c == ']' && opening != '[')) {
                return 0;
            }
        }
    }

    return top == -1;
}

int main() {
    char s1[] = "()[]{}";
    char s2[] = "(]";
    char s3[] = "(((";

    printf("%s\n", isValid(s1) ? "true" : "false");
    printf("%s\n", isValid(s2) ? "true" : "false");
    printf("%s\n", isValid(s3) ? "true" : "false");

    return 0;
}