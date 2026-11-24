# Contains Duplicate

- **Problem:** Contains Duplicate
- **Platform:** LeetCode
- **Problem Link:** https://leetcode.com/problems/contains-duplicate/

## Approach
I used two nested loops to compare each element with the remaining elements. If two elements are equal, the function returns true. Otherwise, it returns false.

## Time Complexity
O(n²)

## Space Complexity
O(1)

## Test Cases
- Array: [1, 2, 3, 1] → Output: true
- Array: [1, 2, 3, 4] → Output: false