# B - Magical List Keeper

First of all, if we process the queries with an array, it will lead to TLE. Let's analyse the time complexity for each query in case of an array:
- `Query 1`: $O(1)$
- `Query 2`: $O(n)$
- `Query 3`: $O(n \log{n})$

When we are given $C/2$ queries of `Query 1` and $C/2$ queries of `Query 3`, it will cost about $O(Q^2 \log{Q})$. We can optimize the time complexity of `Query 2` to O(1) using a deque but, the overall process would still lead to a TLE.

> ### Observations:
> - for `Query 2` we only need to access the smallest element or the first added element (depending on the order of the queries).
> - for `Query 3`, instead of explicitly sorting the entire list, we only need to ensure that the smallest elements are readily accessible. This can be achieved by maintaining a priority queue (min-heap), which keeps elements in sorted order and allows efficient retrieval of the smallest element.

For this purpose, we maintain two data structures, a _queue_ and a _priority que_ (Min Heap). For every query, we do the following:
- `Query 1`: push the element to _queue_
- `Query 2`: If the _priority queue_ is not empty, print its top element and remove it. Else, print the front element of the _queue_ and remove it.
- `Query 3`: Transfer all elements from the _queue_ to the _priority queue_ by popping them one by one and inserting them into the _priority queue_.

This way, every element is pushed only once to the _queue_ and at most once to the _priority queue_, bringing down the overall time complexity.