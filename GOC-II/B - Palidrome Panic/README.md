# B - Palindrome Panic

To check if a string is a palindrome, you need to verify every pair of positions $(i, n-i-1)$.  
Similarly, for this problem, we iterate over every pair from $0$ to $n/2$ and check whether the characters at positions $i$ and $n-i-1$ can be made equal or not.

If there exists at least one pair that cannot be made equal following the given rules, the answer is **NO**; otherwise, the answer is **YES**.

### Key Observation

For a pair of characters to become equal after transformation, the distance between their ASCII values must either be $0$ or $2$.

---

### Proof

Let’s consider a character pair $s[i]$ and $s[n-i-1]$ that can be made equal.  
WLOG, assume that $s[n-i-1]$ is not alphabetically earlier than $s[i]$.

1. **Case 1: Characters are already equal**  
   A backward or forward transformation can be applied to keep them equal.  
   This implies the distance between their ASCII values is $0$.

2. **Case 2: Characters are not equal but can be made equal**  
   In this case, we have:

   $s[n-i-1] - 1 = s[i] + 1$

   Simplifying this gives:

   $s[n-i-1] - s[i] = 2$

Thus, the distance between the two characters is either $0$ or $2$, proving the claim.
