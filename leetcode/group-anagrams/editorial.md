# Group Anagrams

## Approach 1: Hash Table With Sorted Strings as Key
By sorting each string, we will get a unique key by which all anagrams will map
to.

Our running time is $O(NKlogK)$ where $N$ is the number of strings and $K$ is the
length of the string. 

Our space complexity is $O(NK)$ since we must store $N$ strings of length $K$.

## Approach 2: Hash Table With Char Frequency Map as Key
If we count the character frequencies of each string, the result should be identical
for anagrams. Thus, we can use this as the key to group our strings instead of 
having to sort.

For each string, we must iterate through its characters which takes $O(NK)$ time
overall.

We are still storing $N$ strings of length $K$ so our space complexity remains the
same at $O(NK)$.
