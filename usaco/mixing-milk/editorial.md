# Mixing Milk

## Intuition
This is a simulation problem so we just have to code up the given procedure in 
the problem statement. The main difficulty of this problem is coming up with a 
way to elegantly express transferring milk between buckets.

One way, would be to use if-else statements to handle the different cases. But 
we note that the amount we transfer to the other bucket is always limited by either
the amount available or the remaining capacity. Using this idea, we can use a 
call to the `min()` function to elegantly express how much milk we transfer at 
each iteration.

## Analysis
Since we always process $100$ pours total, our algorithm runs in $O(1)$ time.

Since we always have $3$ buckets, we will only need two arrays of length $3$.
This gives us $O(1)$ space complexity.
