# E - Unlocking the Hall Office
To solve this problem, we can treat it as a graph traversal problem where the rooms are nodes and passes define directed edges. The objective is to find the shortest path (in terms of the number of edges) from Room $1$ to Room $N$, while ensuring that the solution is lexicographically smallest in case of ties.

Applying BFS would give us the shortest path from Room $1$ to Room $N$ and to obtain the lexicographically smallest path, we will sort each adjacency list. This way, we make sure that we store (and visit during BFS) neighbors of each edge in lexicographical manner.

Now, to trace back the path, we can maintain an array of "parents" $p$[], which stores for each vertex the vertex from which we reached it.