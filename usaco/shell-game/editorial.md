# Shell Game

## Intuition
USACO problem statements can be confusing to read sometimes, so I will try my best 
to explain what the question is asking.

We are playing a game with three shells and we have to guess which shell has a 
small pebble under it after a series of swaps. Each round of swapping, we take a
guess of which shell the pebble is under. If we guess correctly, we get a point.
We want to determine what is the maximum number of points we can get.

One roadblock of this problem is that we **do not** know the initial position of 
the small pebble. Thus, we will have to exhaustively test each of the three scenarios:
initial position is left shell, initial position is middle shell, initial position
is right shell. 

Our input consists of $N$ rows of variables $a, b, g$. $a$ and $b$ are the positions
that we swap. $g$ is the guess that we take during that round of swapping.

## High Level Algorithm
We read in the guess and store them in a 2D array. Then we iterate over all the 
possible starting locations for the pebble and simulate the swaps and guesses with 
a loop. We store the points garnered from each of these possibilities in an array
and give the max value as our result.

## Analysis
For each of the $3$ possible starting locations of the pebble we process $N$ rounds
of swaps and guesses. This gives us a runtime of $O(3N) \Rightarrow O(N)$.

For space, we need to store $N$ rows of $3$ variables, so $O(3N)$. We also need
$O(3)$ space to store the points for each of the initial locations. Overall, we
need $O(N)$ space.
