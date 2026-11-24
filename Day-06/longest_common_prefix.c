#include <stdio.h>
#include <string.h>

int main() {
    char *strs[] = {"flower", "flow", "flight"};
    int n = 3;
    char prefix[100];

    strcpy(prefix, strs[0]);

    for (int i = 1; i < n; i++) {
        while (strncmp(prefix, strs[i], strlen(prefix)) != 0) {
            prefix[strlen(prefix) - 1] = '\0';

            if (strlen(prefix) == 0) {
                break;
            }
        }
    }

    printf("Longest common prefix: %s\n", prefix);

    return 0;
}