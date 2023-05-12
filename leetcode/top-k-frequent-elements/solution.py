class Solution:
    def topKFrequent(self, nums, k):
        buckets = [[] for _ in range(len(nums) + 1)]
        counts = Counter(nums).items()
        for num, freq in counts:
            buckets[freq].append(num)
        flat_list = [item for sublist in buckets for item in sublist]
        return flat_list[::-1][:k]
