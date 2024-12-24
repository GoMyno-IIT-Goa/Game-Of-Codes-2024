# Problem D : Treasure Hunt with Magic

## Problem Description

Goldi can collect gold from piles in a strictly increasing manner, starting from any day. Additionally, he has the magical power to modify the gold coins in up to `k` piles, but only for the piles **after the last pile he selects**.
He can choose the **modified piles only** after using magical power. 

### Objective:
Find the maximum number of piles from which Goldi can collect gold.

---

## Key Insight

1. To maximize the piles, Goldi should:
   - Find the **Longest Increasing Subsequence (LIS)** in the first `(n - k)` piles.
   - Add `k` (the number of modifiable piles) to the length of the LIS.

2. Why this works:
   - If you include more than `(n - k)` piles, you won't have enough piles left to modify (`< k` modifiable piles).
   - Hence, the optimal strategy is to:
     - Modify the last `k` piles to fit the sequence.
     - Maximize the LIS in the remaining `(n - k)` piles.

---

## Optimized Approach

1. **Binary Search for LIS**:
   - Use a binary search approach to find the LIS efficiently in $O(n log n)$.
   - Apply this to the first `(n - k)` elements.

2. **Final Answer**:
   - Add `k` to the length of the LIS found in the first `(n - k)` piles.

To learn more about the Binary Search for LIS, you can refer to this <a href="https://takeuforward.org/data-structure/longest-increasing-subsequence-binary-search-dp-43/"> article </a>.
