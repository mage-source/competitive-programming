class Solution:
    def hammingDistance(self, x, y):
        xor = x ^ y
        distance = 0
        while xor:
            xor = xor & (xor - 1)
            distance += 1
        return distance
