# Two Sum

## Approach 1: Brute Force
Use a nested for loop to check every possible pair in the input array. This approach
takes $O(N^2)$ time where $N$ is the number of elements.

The space complexity is $O(1)$ since we are only using two pointers irrespective
of the input size.

## Approach 2: Store Complements In Lookup Table
Let `complement = target - current_num`. If this complement exists in our hash
table containing previously encountered elements, then we have our pair that sums
to the target value. 

Otherwise, we store the current value in our hash table and map it to its index
for quick lookup later on.

The time complexity is $O(N)$ since we are processing each element at most once.

The space complexity is $O(N)$ since we will need to store at most $N$ elements 
in our lookup table.

## Approach 3: Sort and Two Pointers
We first sort the input array. Then, we initialize two pointers on opposite ends
of the array and cleverly update them towards the middle.

The time complexity is dominated by sorting which takes $O(NlogN)$.

The space complexity is $O(N)$ due to the space requirement of sorting for the 
python implementation of TimSort.
