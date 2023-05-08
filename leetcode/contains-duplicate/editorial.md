# Contains Duplicate

## Intuition
To solve this problem, we can just use a hash set to store previously seen values.

## Analysis
Time complexity is $O(n)$ where $n$ is the number of elements in the input array.
This is because we process each element of the array at most once.

Space complexity is $O(n)$ since we will have to store every element of the input
array at most once.
