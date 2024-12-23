# Treasure Hunt

Given `n` piles, we can take gold from a pile only if it is greater than the gold taken previously. We can start from any pile and collect gold from at most `k` piles. A brute force solution would result in **Time Limit Exceeded (TLE)** due to high constraints. The optimized solution reduces the time complexity significantly.

### Optimized Approach:

1. **Next Greater Pile**: To efficiently jump to the next pile with greater gold, we use a **stack** to preprocess and find the "next greater pile" for each pile in \(O(n)\) time.
2. **Gold Collection Simulation**: Once we know the next greater pile for each pile, we simulate collecting gold from each pile, making up to `k` jumps, and calculate the total gold collected. We then maximize the collected gold across all possible starting piles.

### Step 1: Finding the Next Greater Pile Using a Stack
Using a stack, we traverse through the piles and find the index of the next pile with greater gold for each pile. The idea is to store indices of piles in a stack and, as we iterate through the piles, pop elements from the stack whenever we find a pile with more gold than the pile at the stack’s top. The stack will help determine the "next greater pile" efficiently.

- **Preprocessing time**: $O(n)$
- `fmax[i]` will store the index of the next pile with more gold for pile `i`. If no such pile exists, it will point to itself.

### Step 2: Simulating the Gold Collection
For each pile, we start collecting gold and make at most `k` jumps to the next greater pile, as determined by the `fmax` array. For each starting pile, we calculate the total gold collected and update the result with the maximum gold across all possible starting points.

- **Gold collection process**: For each pile, accumulate gold and jump to the next greater pile using `fmax`. Stop if we reach the end or make `k` jumps.

### Time Complexity:
- Finding the next greater pile (`fmax`): $O(n)$ due to the stack-based approach.
- Simulating gold collection for each pile: $O(n \cdot k)$.
- **Total Time Complexity**: $O(n \cdot k)$, which is much more efficient than the brute force approach $O(n^2)$.

---
