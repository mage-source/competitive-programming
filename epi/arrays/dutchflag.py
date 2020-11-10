'''
This problem is trivial to solve if we allow ourselves O(n) space.
We form three lists: one for elements less than, equal to, and greater than
the pivot.
We then write these elements to an array A, giving us O(n) time.
'''

'''
We can avoid using O(n) space by swapping elements in-place using a 
double for loop. However, this approach would give us O(n^2) time.
'''
def dutch_flag_partition(pivot_index, A):
	pivot = A[pivot_index]
	for i in range(len(A)):
		for j in range(i + 1, len(A)):
			if A[j] < pivot:
				A[i], A[j] = A[j], A[i]
				break

	for i in reversed(range(len(A))):
		if A[i] < pivot:
			break
		for j in reversed(range(i)):
			if A[j] > pivot:
				A[i], A[j] = A[j], A[i]
				break
''' 
There is no need to start from so far back everytime 
with double for loop. By using another pointer to 
in lieu of an extra for loop, we can achieve O(n) time.
'''
def dutch_flag_partition(pivot_index, A):
	pivot = A[pivot_index]
	smaller = 0
	for i in range(len(A)):
		if A[i] < pivot:
			A[i], A[smaller] = A[smaller], A[i]
			smaller += 1

	larger = len(A) - 1
	for i in reversed(range(len(A))):
		if A[i] < pivot:
			break
		elif A[i] > pivot:
			A[i], A[larger] = A[larger], A[i]
			larger -= 1
'''
This next approach achieves the result in a single pass
in exchange for a trickier implementation.
Idea is to maintain the partitions of lesser than,
equal to, greater than with three pointers during 
the single pass. O(n) time. O(1) space.
'''
def dutch_flag_partition(pivot_index, A):
	pivot = A[pivot_index]
	smaller, equal, larger = 0, 0, len(A)

	while equal < larger:
		if A[equal] < pivot:
			A[equal], A[smaller] = A[smaller], A[equal]
			equal += 1
			smaller += 1
		elif A[equal] == pivot:
			equal += 1
		else:
			larger -= 1
			A[larger], A[equal] = A[equal], A[larger]
 















