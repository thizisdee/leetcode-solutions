#include <stdio.h>

int binarySearch(int nums[], int n, int target) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
            return mid;

        if (nums[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}

int main() {
    int nums[] = {1, 3, 5, 7, 9};
    int target = 7;
    int n = 5;

    printf("Index: %d\n", binarySearch(nums, n, target));

    return 0;
}