# Hamming Distance

## Intuition
In this problem, we want to find the **Hamming Distance** between two integers.
That is, the number of positions at which the corresponding bits are different.

The above definition naturally leads to the `XOR` operator which returns `1` iff
the bits are different. After applying `XOR` we can view this as a bit-counting 
problem in which we process each bit one by one.

### Approach 1: Built-in Functions
Using these defeats the purpose of an interview problem, but it is useful to know
they exist when writing real-world software.

### Approach 2: Bit Shift
Instead of using the built-in bit counting function, we manually implement a 
counting procedure ourselves. In this procedure, we use the bitwise `AND` operator
and a bit mask of `1` to check if the rightmost bit is on. After, we do a 
**logical bitwise right shift** to discard and move to the next bit.

### Approach 3: Brian Kernighan's Algorithm
The motivation behind this algorithm is to eliminate the need to check each bit
one-by-one. The general idea is that we can efficiently count the bits by immediately
skipping over to the next `1` bit instead of having to go through all the `0` bits
in between.

The way we accomplish this is by first computing the bit sequence of `x - 1`.
What this does is turn off the rightmost bit and sets all bits to the right of 
that bit to `1`. 

From here, we compute `x & (x - 1)`. After playing with a few simple examples, we 
can see that this will always give us the next rightmost bit.

Using this algorithm, the number of operations is equal to the number of `1` bits
in the sequence rather than the length of the bit sequence itself.

## Analysis
Although the clever bit counting algorithm requires fewer iterations to compute 
the result in practice, all of the algorithms would run in $O(1)$ time. This is
because the size of an integer number is fixed.

For similar reasons, the space complexity is also $O(1)$.
