# LRU Cache

## Intuition
We want to create a cache with an LRU eviction policy such that the `get()` and
`put()` operations run in $O(1)$ time.

The first thing that comes to mind when we need operations that run under these 
constraints is the hash map data structure. However, a standard hash map offers 
no way to implement the LRU eviction policy. To remedy this, we must combine the
hash map data structure with a doubly linked list structure.

We use the hash map to map the keys to each node for quick lookups. The DLL 
structure is used to maintain the order in which the nodes were last used. If we
ever need to evict a node, we simply remove the tail of the DLL. The way we maintain
this order is by moving the node to the head of the DLL every time it is referenced
via a `get()` or `put()` operation.

The idea of this problem is straightforward, but implementing takes some work as
one must carefully manage a bunch of pointer manipulations. This problem is good
for practicing your attention to detail, ability to organize code, and reason about
edge cases.

## Analysis
`get()` and `put()` run in $O(1)$ time.

Our space complexity is $O(N)$ where $N$ is the given capacity of the cache. This
is because the hash map and DLL will only have to hold at most $N + 1$ elements 
at any given time.
