# Brute Force 
def parity(x):
	result = 0
	while x:
		result ^= x & 1
		x >>= 1
	return result
# O(n) where n is the total number of bits in x

# x&(x-1) trick - equals x with its lowest set bit erased
def parity(x):
	result = 0
	while x:
		result ^= 1
		x &= x - 1
	return result
# This trick improves the best and average cases
# O(k) where k is the number of set bits in the particular word

# Caching
def parity(x):
	MASK_SIZE = 16
	BIT_MASK = 0XFFFF
	return (PRECOMPUTED_PARITY[x >> (3 * MASK_SIZE)] ^
			PRECOMPUTED_PARITY[(x >> (2 * MASK_SIZE)) & BIT_MASK] ^
			PRECOMPUTED_PARITY[(x >> MASK_SIZE) & BIT_MASK] ^
			PRECOMPUTED_PARITY[x & BIT_MASK]) 
# bitmask allows you to only get the last 16 bits
# XOR is associative so it does not matter the order in which we compute
# i.e. we can group however we want
# O(n/L) where n is word size and L is width of our groups, thus we do
# n/L operations

# Processing multiple bits with XOR
def parity(x):
	x ^= x >> 32
	x ^= x >> 16
	x ^= x >> 8
	x ^= x >> 4
	x ^= x >> 2
	x ^= x >> 1
	return x & 0x1
# takes advantage of associative and commutatitve property of XOR
# we essentially XOR the two halves of the remaining word to get the
# parity of the entire word
