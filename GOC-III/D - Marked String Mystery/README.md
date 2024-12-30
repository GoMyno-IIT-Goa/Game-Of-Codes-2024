# D - Marked String Mystery

First, let's consider the problem without the constraint that the adjacent characters shouldn't be chosen simultaneously.

Let $dp[i] =$ The number of subsequences of $s[1]....s[i]$ such that the $i^{th}$ character is always chosen.
Here, we define $dp[0] = 1$ corresponding to the empty string. The transition can be written as follows:

$$
dp[i] = \sum_{j=0}^{i-1} dp[j]
$$

However, this approach might count the same subsequence multiple times. To address this, we adjust the transition as follows:

$$
dp[i] = \sum_{j=k}^{i-1} dp[j]
$$

here, $k$ is the largest integer such that $S[i] = S[k]$ and $k < i$ (or $k = 0$ if no such integer exists).

Intuitively, if $S_k = S_i$, then appending $S_i$ immediately after $S_j$ (for some $j < k$) is unnecessary because the same result could be achieved by appending $S_k$ instead. Therefore, we avoid this redundant operation to ensure we don't count duplicates. This adjustment is the crucial step required to count all unique substrings effectively.

The time complexity looks like $O(n^2)$, but it is can actually being performed in a time complexity of $O(nk)$ where $k$ is the number of distinct alphabets ($max(k) = 26$), which is fast enough.

The same idea can be applied to the original problem as well. Let $dp[0] = 1$ and $dp[1] = 0$. The recurrence relation can be written as:

$$
dp[i+1] = \sum_{j = k}^{i-1} dp[j]
$$
where $k$ is the largest integer such that $S[i] = S[k]$ and $k < i$ (or $k = 0$ if no such integer exists).
