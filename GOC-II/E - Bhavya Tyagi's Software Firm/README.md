# E - Bhavya Tyagi's Software Firm

First, let's solve the problem using simple dp in $O(n^2 k)$. Let $dp[i][j]$ denote the minimum total time-factor for the first $j$ sub-tasks given that we have $i$ developers.
Then,

$dp[i, j] = \min_{0 \leq t \leq j} \, \{dp[i-1, t-1] + C(t, j)\}$

where $C(t, j)$ is a cost function of the subarray $a[t], a[t+1], .... , a[j]$ or in this case,

$C(t, j) = (j-t+1) * (d[t] + d[t+1] + ... + d[j])$

This cost function can be called in $O(1)$ time complexity by pre-computing a prefix sum array for the array $d[]$

The above dp has $n \times k$ states and has $n$ transitions for each state hence the time complexity of $O(n^2 k)$.<br>
The code for the same is added in the file [tle.cpp](https://github.com/GoMyno-IIT-Goa/Game-Of-Codes-2024/blob/main/GOC-II/E%20-%20Bhavya%20Tyagi's%20Software%20Firm/tle.cpp), but it obviously results in a TLE.

---

### Further optimization
Now, to further optimize the above dp, let $u(i,j)$ be the value of $t$ that minimizes the above dp expression, i.e. $dp[i, j] = dp[i-1, t-1] + C(t, j)$ is minimum when $t = u(i,j)$.

Then, $u(i,j) \leq u(i, J)$ for any $J \geq j$. In other terms, consider an array $d_1, d_2, d_3, ..... ,d_n$. Now, consider two subarrays $d_1, d_2, d_3, ..... ,d_j$ and $d_1, d_2, d_3, ..... ,d_J$ of this array where $j \leq J$.<br>
Now if we want to split these subarrays once such that the total time-factor is minimized, we can surely say that the optimal splitting point of the former subarray does not come after the optimal splitting point  of the latter subarray.

This monotonicity of $u(i,j)$ allows us to apply the divide and conquer DP optimization. I would recommend reading [this](https://cp-algorithms.com/dynamic_programming/divide-and-conquer-dp.html) article on cp-algorithms for more understanding.
