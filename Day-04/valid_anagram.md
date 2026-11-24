# Valid Anagram

- **Problem:** Valid Anagram
- **Platform:** LeetCode
- **Problem Link:** https://leetcode.com/problems/valid-anagram/

## Approach
I used an array of 256 counters to track character frequencies. For every character in the first string, I increment its count. For every character in the second string, I decrement its count. If all counts are zero, the strings are anagrams.

## Time Complexity
O(n)

## Space Complexity
O(1)

## Test Case
- Input: listen, silent
- Output: true