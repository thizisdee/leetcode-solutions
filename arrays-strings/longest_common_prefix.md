# Longest Common Prefix

- **Problem:** Longest Common Prefix
- **Platform:** LeetCode
- **Problem Link:** https://leetcode.com/problems/longest-common-prefix/

## Approach
I initially assumed the first string was the prefix. I compared it with every other string. If they didn't match, I shortened the prefix one character at a time until all strings matched or the prefix became empty.

## Time Complexity
O(n × m)

## Space Complexity
O(m)

## Test Case
- Input: ["flower", "flow", "flight"]
- Output: fl