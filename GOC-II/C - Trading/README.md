# Problem C : Trading

## Problem Description

You are given two arrays:

1. **Profit/Loss Array (`nums`)**: This array represents the profit or loss you will gain by trading on a particular day.
2. **Stocks Array (`stocks`)**: This array contains the fixed prices of stocks, which do not vary with days.
3. You have to find the maximum number of stocks you can buy in **one** day.
---

## Brute Force Approach

1. **Iterate through each starting day `i`:**
   - Accumulate the profit/loss for each day starting from day `i`.
   - For each accumulated sum, compute the number of stocks you can buy at the stock price for that day.
   - Track the maximum number of stocks that can be bought.

2. **Complexity Analysis:**
   - **Time Complexity**: $O(n * n * m)$, which is inefficient for large `n` or `m`.

---

## Optimized Approach

### Key Observations:
1. To maximize the number of stocks you can buy, you need the maximum profit available on a particular day.
2. Finding the maximum profit with a starting day `i` is equivalent to finding a **subarray with the maximum sum** in the `nums` array.

#### This can be found using Kadane's algorithm. Find maximum subarray sum using Kadane and use the obtained amount to find the number of stocks you can buy. That will be our answer. The time complexity of this approach will be $O(n + m)$.
---
