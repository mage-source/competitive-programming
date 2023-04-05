# Cheapest Flights Within K Stops

## Intuition
We want to find the cheapest path of length $k$ from source to destination.
We can view each city as a node and the cost of each flight between cities as 
a weighted edge. Thus, we can interpret the problem statement as trying to find
the shortest path in a weighted graph. There are multiple known algorithms we 
can use to solve this problem namely: BFS, Bellman-Ford, and Dijkstra. We will 
be discussing each algorithm, its runtime, and tradeoffs below.

Note: When discussing weighted graphs, the terms **cost** and **distance** are 
used interchangeably in this article.

## BFS
Normally, BFS would only be useful on an unweighted graph. This is because a 
**shorter** path does not necessarily mean a **cheaper** path in a weighted graph.
Thus, we would end up having to traverse the entire weighted graph anyways. However,
this problem limits the paths to a length of $k$. So, we can use BFS since the 
number of levels is bounded by $k$.

### High-Level Algorithm
We set up a cost table to record the minimum cost to arrive at each city, then 
use BFS to traverse our graph representation and update the table. Note that we 
must build the adjacency list ourselves to represent the graph as the input is 
given as `List[List[int]]` in Python or more generally a 2D array.

### Analysis
Let $E$ be the number of flights or edges, $N$ be the number of cities or nodes,
and $K$ the given constant for path length.

We may have to process edges multiple times, but this is bounded by $K$ levels. 
In the worst case, BFS traversal will take $O(E\cdot K)$.
We also need $O(N)$ time to initialize our cost table for each city and $O(E)$
to build the adjacency list representation of our graph.
Overall, this algorithm runs in $O(N + E\cdot K)$ time.

For the space complexity, we are processing at most $E\cdot K$ edges so the BFS
queue will take up at most $O(E\cdot K)$ space. We also need $O(E)$ space for the 
adjacency list and $O(N)$ space for the cost table. 
Overall, we need $O(N + E\cdot K)$ space.

## Bellman-Ford
The Bellman-Ford algorithm is essentially a Dynamic Programming approach with
space optimization for 2D tabulation. This is fitting considering Richard Bellman
is the one who invented Dynamic Programming.

Bellman-Ford relies on the property that the graph is acyclic. This lets us assume
that the shortest path contains at most $n - 1$ edges in a graph of $n$ nodes.

### High-Level Algorithm
Per its relation to Dynamic Programming, this algorithm follows an iterative approach.
We take an arbitrary starting node and build a table that contains the shortest distance 
to get to all other nodes in the graph. All distances are initialized to infinity 
and **relaxed** or reduced as we run through the algorithm.

In the first iteration, we compute the shortest distances with at most **one** edge 
in the path. 

In the second iteration, we compute the shortest distances with at most **two**
edges in the path, and so on.

In general, we compute the shortest distance with at most **i** edges during the 
$i-th$ iteration.

Since the shortest path is upper bounded by the number of edges, $n - 1$, the 
algorithm will iterate $n - 1$ times over the edges. However, this problem only 
wants us to find paths of length $k$, so we can restrict our algorithm to run 
$k + 1$ iterations.

### Analysis
We are iterating over the $E$ edges $K + 1$ times which takes $O(E \cdot K)$.
Each iteration we also copy and update two arrays of size $N$ for each of the cities.
This takes $O(N \cdot K)$. Thus, our overall runtime is $O((N + E) \cdot K)$.

For space, we need two arrays of size $N$ which gives us $O(N)$ space complexity.
