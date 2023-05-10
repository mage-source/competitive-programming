class Solution:
    def groupAnagrams(self, strs):
        char_freq_hash = defaultdict(list)
        for s in strs:
            char_counts = [0 for _ in range(27)]
            for c in s:
                char_counts[ord(c) - ord('a')] += 1
            char_freq_hash[tuple(char_counts)].append(s)
        return [group for group in char_freq_hash.values()]
