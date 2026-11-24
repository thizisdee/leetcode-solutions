#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "listen";
    char str2[] = "silent";
    int count[256] = {0};
    int isAnagram = 1;

    if (strlen(str1) != strlen(str2)) {
        isAnagram = 0;
    } else {
        for (int i = 0; str1[i] != '\0'; i++) {
            count[(unsigned char)str1[i]]++;
            count[(unsigned char)str2[i]]--;
        }

        for (int i = 0; i < 256; i++) {
            if (count[i] != 0) {
                isAnagram = 0;
                break;
            }
        }
    }

    printf("%s\n", isAnagram ? "true" : "false");

    return 0;
}