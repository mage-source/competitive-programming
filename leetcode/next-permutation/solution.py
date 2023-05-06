class Solution:
    def nextPermutation(self, nums):
        n = len(nums)
        pivot = n - 1

        while pivot >= 1 and nums[pivot] <= nums[pivot - 1]:
            pivot -= 1

        if pivot != 0:
            i = n - 1
            while nums[i] <= nums[pivot - 1]:
                i -= 1
            nums[i], nums[pivot - 1] = nums[pivot - 1], nums[i]

        left = pivot
        right = n - 1
        while left < right:
            nums[left], nums[right] = nums[right], nums[left]
            left += 1
            right -= 1
