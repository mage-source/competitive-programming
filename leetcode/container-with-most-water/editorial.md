# Container With Most Water

## Intuition
Given a list of vertical heights, we want to choose two of them. These two heights
will form a container and the goal is to make our selection such the maximum amount
of water can be stored. 

## Naive
We can iterate through every pair of heights and calculate the area of the resulting
container. Since we iterate through every possibility, we are guaranteed to encounter
the maximum container.

### Analysis
Iterating through every pair will take $O(N^2)$ time.

We do not use any extra space, so our space complexity will be $O(1)$.

## Two Pointers
Instead of naively checking every possibility, we can intelligently process our 
pairs with two pointers. 

### High Level Algorithm
Initialize a left and right pointer at both ends of the list. At each iteration 
we will compute the container area and move the pointer that has the smaller height.
The reasoning is that by moving the smaller height, we may encounter a larger 
height next which will overcome the reduction in width and improve our container 
area. Contrarily, if we were to move the larger height, we would **always** end 
up with a container area less than or equal to our previous one since the container 
height is limited by the smaller height. In other words, there is no possibility 
of improving our container area by moving the larger height.

### Analysis
We will process each height at most once so our runtime will be $O(N)$ where 
$N$ is the number of heights we are given.

We are only using two pointers which uses constant or $O(1)$ space.
