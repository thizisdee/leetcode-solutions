# Move Zeroes

- **Problem:** Move Zeroes
- **Platform:** LeetCode
- **Problem Link:** https://leetcode.com/problems/move-zeroes/

## Approach
I used a position variable to keep track of where the next non-zero element should go. I moved all non-zero elements to the beginning of the array and filled the remaining positions with zeroes.

## Time Complexity
O(n)

## Space Complexity
O(1)

## Test Case
- Input: [0, 1, 0, 3, 12]
- Output: [1, 3, 12, 0, 0]