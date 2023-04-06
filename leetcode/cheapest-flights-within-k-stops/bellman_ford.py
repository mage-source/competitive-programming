class Solution:
    def findCheapestPrice(self, n, flights, src, dst, k):
        cost_table = [float('inf')] * n
        cost_table[src] = 0
        for i in range(k + 1):
            temp = cost_table.copy()
            for s, d, p in flights:
                if cost_table[s] != float('inf'):
                    temp[d] = min(temp[d], cost_table[s] + p)
            cost_table = temp
        return cost_table[dst] if cost_table[dst] != float('inf') else -1
