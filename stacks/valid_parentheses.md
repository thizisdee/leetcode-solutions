# Valid Parentheses

- **Problem:** Valid Parentheses
- **Platform:** LeetCode
- **Problem Link:** https://leetcode.com/problems/valid-parentheses/

## Approach
I used a stack to store opening brackets. When a closing bracket appeared, I checked whether it matched the most recently stored opening bracket. If every bracket matched and the stack was empty at the end, the string was valid.

## Time Complexity
O(n)

## Space Complexity
O(n)

## Test Cases
- Input: "()[]{}" → Output: true
- Input: "(]" → Output: false
- Input: "(((" → Output: false