# Maximal Square

## Intuition
Since we want to find the largest square containing only `1`'s, a straightforward
brute force approach would be to simple check every possible square in the given
`m x n` matrix.

To do this, we traverse through each cell and treat it as the top left corner of
a square. From this cell, we traverse diagonally and check the entire row and 
column for `1`'s. We end our iteration early every time we encounter a cell that
contains `0`.

By working through a couple of examples we can make a few observations:

1. There is a lot of repeated work. In particular, we end up checking the same
cells multiple times.
    - This hints that this is probably a dynamic programming problem and we should
    try to utilize memoization or tabulation.

2. "We are only as strong as the weakest link." If there is a single `0` in a cell
anywhere within the cell, we can end the iteration early.

Let us examine observation $2$ in more detail since it is how we derive the recurrence
relation for this problem: 
`dp[r][c] = min(left, top, top-left diag) + 1`. 

The intution behind this recurrence definition follows from the weakest link observation.
The existence of `0` in any of the surrounding cells will disrupt our ability to
make a valid square from this cell. Extending this idea, we are only able to make
as big of a square as the shortest surrounding valid side length allows.

To truly understand why this recurrence relation works, it is **highly** recommended
to work out a few examples by hand.

In any case, we are always able to make a valid square of size `1 x 1` if the current 
cell contains a `1` which is where the `+ 1` in our definition comes from.

Keep in mind that the recurrence relation gives us the maximum side length of a
valid square we can create at a given cell. Thus, we must square our final result
to get the area as requested.

Note:
Some solutions will flip the "direction" in which the surrounding elements are 
checked. That is, they consider the top-left cell the anchor point of the candidate
square instead of the bottom-right as in our solution. Both are valid interpretations
and lead to correct answers. 

We just need to make a minor tweak to the recurrence relation: 
`dp[r][c] = min(right, bottom, bottom-right diag) + 1`.

## Analysis
Let $n$ be the number of rows and $m$ be the number of columns of the given matrix.

The brute force approach takes $O((mn)^2)$ time. This is because in the worst case, 
we will have a matrix filled with `1`'s. 

The space complexity for brute force is $O(1)$.

By utilizing dynamic programming, we are able to reduce the time complexity to 
$O(mn)$ at the cost of increasing our space complexity $O(mn)$.

We can further optimize the space complexity to $O(n)$ since at any point, we 
only need the $i^{th}$ row and $(i - 1)^{th}$ row.
