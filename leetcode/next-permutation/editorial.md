# Next Permutation

## Intuition
In this problem, we want to find the next lexicographically greater permutation
for an array of integers. To better understand what this means, think of the 
entire integer array as a single number. Then, the next lexicographically greater
permutation of the digits is simply the next greatest number we could get by 
rearranging the digits.

To rearrange the digits, we obviously need to pick two digits to swap. This leads
us to an important observation: the further the position of the left digit that 
we choose to swap with is, the greater increase we will get. Since we are finding
the next greatest number, we want to minimize this effect. Thus, we should start
checking for good swap candidates from right to left.

This brings us to the next question: what makes a good swap candidate? Clearly, 
we should not swap left and right digits where the right digit is less than the
left digit. Additionally, the left and right digits could have the same value.
So, we only want to make a swap iff the right digit is greater than the left 
digit.

Okay so at this point, we know we are starting from the right side of the array
and only swapping values if the `right_value > left_value`. But how do we iterate?
For example, say the first swap is not a good candidate. Should we only move the 
left pointer as we continue to search for a good swap?

The answer is no. Due to not swapping, we know the left value is at least as great
as the right value. By only moving the left value pointer, we are continuing to 
compare with the right value which minimizes our chance to get a good swap since
it has the lower value. This results in our left pointer having to move further
to the left of the array than it should, which we know drastically increases our
resulting permutation lexicographically. So, we should move **both** the left and
right value pointers as we iterate for a good swap.

Let us now consider the point when we finally get a good swap. We have a good 
swap but is it the best swap? We know the left value is larger than all the values
to the right of it. But, we cannot guarantee that the value immediately to its
right is the swap that would minimize the resulting permutation (the value closest
to the left value). Thus, we must do a linear search through the right portion of
the array to find the best swap candidate. Iterating in either direction works
here.

Afterwards, we can finally perform the swap. One thing to notice is that the values
to the right of our new right value are now sorted in decreasing order. This is
a byproduct of our good swap condition. We can reverse this partition of values
and the resulting array is our next greater permutation.

Note: This is one of those problems that involves a really clever trick to solve
rather than a pattern. So don't be discouraged if you were not able to solve it
on your own. Most interviewers probably would not ask this type of question.

## Analysis
In the worst case, only two scans across the array are needed so our algorithm
runs in $O(N)$ time.

We only use two pointers so our space complexity is $O(1)$.
