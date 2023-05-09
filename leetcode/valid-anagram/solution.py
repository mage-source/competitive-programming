class Solution:
    def isAnagram(self, s, t):
        char_freq = [0 for _ in range(27)]
        s_len, t_len = len(s), len(t)
        
        if s_len != t_len:
            return False

        for i in range(s_len):
            s_char = s[i]
            char_freq[ord(s_char) - ord('a')] += 1

        for i in range(t_len):
            t_char = t[i]
            char_freq[ord(t_char) - ord('a')] -= 1
            if char_freq[ord(t_char) - ord('a')] < 0:
                return False

        return True
