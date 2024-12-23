# A - Bitwise Swap

This problem can be solved efficiently by identifying the indices in $s$ where $a[i] == 1$ and sorting the digits at these indices in descending order. Then, reassign these sorted digits back to their respective positions in $s$.

### Steps
- Traverse through string $a$ and collect all characters of $s$ at positions where $a[i] == 1$. Store these digits in an array.
- Sort this array in descending order. This ensures that we will reassign the digits in the most lexicographically favorable way.
- Traverse $a$ again, and for each $a[i] == 1$, replace the corresponding character in $s$ with the next largest digit from the array.