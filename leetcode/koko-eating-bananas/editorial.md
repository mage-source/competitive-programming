# Koko Eating Bananas

## Intuition
To find **a** solution, we could easily just take the maximum number of bananas
in a pile as our eating speed. However the question asks us to find the **minimum** 
eating speed such that it still satisfies our constraints. 

The naive way to do this would be to start at an eating speed of $1$ and increment 
until we find a valid speed. The first valid speed we encountered is guaranteed 
to be the minimum, by definition.

To optimize this approach, we instead do a binary search on the possible range 
of values for the speed. This follows the boundary finding pattern in which we 
view the problem abstractly as a binary filter of true/false values. We want to
find the exact position at which the filter changes from false to true.

## Analysis
Let $K$ be the possbible range of speed we need to check and $N$ be the number of
piles of bananas.

For the naive approach, our time complexity is $O(N \cdot K)$.

For the optimized approach, our time complexity is $O(N \cdot logK)$.

In both approaches, the space complexity is $O(1)$.
