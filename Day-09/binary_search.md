# Binary Search

- **Problem:** Binary Search
- **Platform:** LeetCode
- **Problem Link:** https://leetcode.com/problems/binary-search/

## Approach
I used binary search on a sorted array. I checked the middle element and compared it with the target. If it was smaller, I searched the right half; if it was larger, I searched the left half. I repeated this until the target was found or the search range became empty.

## Time Complexity
O(log n)

## Space Complexity
O(1)

## Test Case
- Input: [1, 3, 5, 7, 9], Target: 7
- Output: 3