#include <stdio.h>
#include <stdbool.h>

bool containsDuplicate(int nums[], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] == nums[j]) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int nums1[] = {1, 2, 3, 1};
    int nums2[] = {1, 2, 3, 4};

    printf("%s\n", containsDuplicate(nums1, 4) ? "true" : "false");
    printf("%s\n", containsDuplicate(nums2, 4) ? "true" : "false");

    return 0;
}