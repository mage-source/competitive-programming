class Solution:
    def twoSum(self, nums, target):
        complements = {}
        for i, num in enumerate(nums):
            candidate = target - num
            if candidate in complements:
                return [complements[candidate], i]
            else:
                complements[num] = i
        return [-1, -1]
