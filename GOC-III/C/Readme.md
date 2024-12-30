# Problem C : Treasure hunt with Friend

## Problem Description

The goal is to find the longest palindrome sequence formed by selecting a contiguous subarray from the first set of piles and a contiguous subarray from the second set of piles, combined back-to-back. A palindrome reads the same forward and backward.

### Example

Given two arrays:
- First set: `1, 2, 3`
- Second set: `3, 2, 1`

The longest palindrome formed is `1, 2, 3, 3, 2, 1`.

## Algorithm

1. **Reverse the second array**: Prepare it for comparison.
2. **Find the longest common subarray**: Use dynamic programming to calculate the longest contiguous subarray shared between the first array and the reversed second array.
3. **Calculate palindrome length**: Double the length of the longest common subarray to get the result.

### Complexity
- Array reversal: `O(n)`
- Longest common subarray: `O(m * n)` where `m` and `n` are the lengths of the arrays.


