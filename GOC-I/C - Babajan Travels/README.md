# C - Babajan Travels
Generally in these type of questions where we have to find "minimum" or "maximum", we use the concept of binary search on answer.

### Key Idea
- If the buses can collectively complete at least $k$ trips within time $t$, then they will also be able to complete $k$ trips for any time $\tau$ where $\tau \geq t$.
- Conversely, if the buses fail to complete $k$ trips within some time $t$, they will also fail for any time $\tau \leq t$

This scenario is perfect for binary search on answer.

Now, for a given time $t$, how can we count the total number of trips completed by all the buses within that time? Since the bust trips are independent, we can iterate over the given array and count the number of trips completed by each bus in time $t$ and add them up.