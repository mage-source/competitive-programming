class Solution:
    def ladderLength(self, beginWord, endWord, wordList):
        if endWord not in wordList or not beginWord or not endWord or not wordList:
            return 0

        L = len(beginWord)

        generalCombos = defaultdict(list)

        for word in wordList:
            for i in range(L):
                generalCombos[word[:i] + '*' + word[i + 1:]].append(word)  

        queue = deque()
        queue.append((beginWord, 1))
        visited = set()

        while queue:
            curWord, curLevel = queue.popleft()
            for i in range(L):
                combo = curWord[:i] + '*' + curWord[i + 1:]
                for word in generalCombos[combo]:
                    if word == endWord:
                        return curLevel + 1
                    if word not in visited:
                        visited.add(word)
                        queue.append((word, curLevel + 1))

        return 0
