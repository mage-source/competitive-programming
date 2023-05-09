# Valid Anagram

## Approach 1: Sorting
The first approach we use is to sort both strings and then compare character by
character.

This would take $O(nlogn)$ time overall and $O(n)$ space.

## Approach 2: Hash Table
The second approach would be to use a hash table data structure to set up a frequency
count for each of the characters. If the resulting character frequency tables of
both strings are the same then they are valid anagrams.

The cost of building the hash tables are $O(m + n)$ where m and n are the lengths
of the two input strings. To comparing the hash tables takes $O(26)$ or $O(1)$
if we assume that the characters are within the English alphabet.

Our space complexity is also $O(1)$ since we will have to store at most $26$ entries
for each letter of the alphabet.

## Approach 3: Hash Table Optimization
In this last approach, we only build up one hash table instead of two. We iterate
through the first string and increment the frequencies. Then, we iterate through 
the second string and decrement the frequencies. If there are any discrepancies,
then we can return `False`. The time and space complexity are identical to approach
$2$. The main advantage of this approach is that the implementation ends up being
shorter and more readable.
