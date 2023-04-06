class Solution:
    def maxArea(self, height):
        '''
        use two pointers:
            compute area at each iteration
            update max if necessary
            always move the pointer at the smaller height
        '''
        res = 0
        left, right = 0, len(height) - 1
        while left < right:
            cur_width = right - left
            cur_height = min(height[left], height[right])
            cur_area = cur_width * cur_height
            res = max(res, cur_area)
            if height[left] < height[right]:
                left += 1
            else:
                right -= 1
        return res
