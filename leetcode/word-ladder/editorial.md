# Word Ladder

## Intuition
We want to find the shortest transformation chain from `beginWord` to `endWord`
using only the words given in `wordList`.

We can view this problem as trying to find the shortest path from `beginWord`
to `endWord` and use the BFS algorithm to find the result. 

The main roadblock for this problem is how to construct our graph representation
with our given data. 

Consider the word `dog`. What would be the next possible words we could traverse
to? Without considering whether they may be valid English words, all words of the 
general form: `*og`, `d*g`, `do*` are possible since they only differ by one 
character.

So for a given word, we map these general forms to their associated word in our
given word list. Then at each iteration of our BFS, we construct the general forms
of the word and use our map to get the next word in our word list. To create this
hash map, we must do some precomputation at the beginning of our algorithm. 

After that, the rest of our algorithm will pretty much be a standard BFS. One 
thing to note is that since we are counting the length of the chain and **NOT**
the number of transformations, we initialize the level of our BFS at $1$ instead
of $0$.

## Analysis
Let $N$ be the number of words in `wordList` and $M$ be the length of each word.

Our precomputation to create the general word form hash map takes $O(N \cdot M)$
time. Additionally, during our BFS we have to create every possible general form
for each word which takes $O(M^2)$ for each of the $N$ words in the worst case.

This gives us an overall time complexity of $O(N \cdot M^2)$.

Our hash map must store $M$ forms for a word of length $M$ which gives $O(M^2)$.
Since we have $N$ words, we need $O(N \cdot M^2)$ space for our hash map.

Our visited map only needs $O(N \cdot M)$ since we are just storing each word of
length $M$ and not all the forms.

Overall, this gives us a space complexity of $O(N \cdot M^2)$.

Note: 

To further optimize time, we could do bidirectional BFS. 

To further optimize space, we could store indices and index pairs instead of the
entire words and general forms.
