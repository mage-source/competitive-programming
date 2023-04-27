# LFU Cache

## Intuition
This problem is essentially a direct next step to the LRU Cache problem. The reason
is that we use the LRU cache eviction policy in the case of tiebreakers when using
the LFU cache eviction policy.

The idea to implement the LFU cache policy is straightforward. We maintain a counter
for each item in our cache and increment the count everytime the item is referenced.

The main hurdle with this problem is how much code and edge cases are involved in
its implementation. In particular, we must figure out how to handle which count 
is considered the LFU count and properly update it. 

To accomplish this, we maintain two hash maps: frequency table and cache. Cache
is simply our LFU cache structure that we will interface with. The frequency table
maps count -> nodes. This is where the DLL for the LRU eviction policy is utilized.
Since all nodes of `count` will be tied, we maintain the tail of the this DLL as 
the LRU and evict that if the LFU count is mapped to multiple nodes.

This problem really tests your ability to manage and abstract large amounts of
complex code into a well designed structure. There are a lot of pointer manipulations
happening all at once, so your mental organization and attention to detail are 
very important in getting the implementation correct.

This problem is closely related to the LRU Cache problem as it is built directly 
on top of it. It is worthwhile to study these two questions together to compare
and contrast the different eviction policies and evaluate them more deeply.

## Analysis
The problem requires that `get()` and `put()` each run in $O(1)$ time. This is 
achieved because all inserts and removes associated with these operations are 
just pointer manipulations with the doubly linked list nodes.

Our space complexity is $O(N)$ where $N$ is the number of key-value pairs. We 
must store each key-value pair in our `cache` hash map as well as an associated 
frequency in our `frequency table`
