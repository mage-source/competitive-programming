# Top K Frequent Elements

## Approach 1: Heap
We first count the occurrence of each element and store the results in a hash table.
After, we create a min heap and maintain a size of $k$ for the desired top $k$
frequent elements.

Building the hash map takes $O(N)$ where $N$ is the length of the input array.
Each add operation to the min heap takes $O(logk)$ which we must do for each element.
Overall, our time complexity is $O(Nlogk)$.

We need $O(N)$ space for the hash map and $O(k)$ space for the min heap. Overall,
our space complexity is $O(N + k)$.

## Approach 2: Bucket Sort
Similar to the first approach, we count the occurrences of each element and store
the results in a hash table. Instead of using a min heap, we can use a 2D array
to store buckets of frequencies. This essentially allows us to "flatten" our input
list into an array of distinct elements sorted by their count in the original list.
Afterwards, we can just return the top k elements from this flattened list.

The time complexity for this approach is $O(N)$. This occurs when the original
list of elements is already comprised of distinct elements.

The space complexity is also $O(N)$ since we will need to store at most $N$ distinct
elements in our hash table and flattened list.
