class Solution:
    def topKFrequent(self, nums, k):
        counts = Counter(nums)
        buckets = [[] for _ in range(len(nums) + 1)]

        for num, freq in counts.items():
            buckets[freq].append(num)

        flat_list = [num for bucket in buckets for num in bucket]

        return flat_list[::-1][:k]
