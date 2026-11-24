# Best Time to Buy and Sell Stock

- **Problem:** Best Time to Buy and Sell Stock
- **Platform:** LeetCode
- **Problem Link:** https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

## Approach
I tracked the minimum price seen so far. For each day's price, I calculated the possible profit by subtracting the minimum price. If the profit was greater than the current maximum profit, I updated it.

## Time Complexity
O(n)

## Space Complexity
O(1)

## Test Case
- Input: [7, 1, 5, 3, 6, 4]
- Output: 5