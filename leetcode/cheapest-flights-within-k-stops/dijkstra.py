class Solution:
    def findCheapestPrice(self, n, flights, src, dst, k):
        visited = {}
        graph = defaultdict(list)
        for s, d, p in flights:
            graph[s].append((d, p))
        pq = []
        pq.append((0, 0, src))
        while pq:
            cost, stops, node = heappop(pq)
            if node == dst and stops <= k + 1:
                return cost
            if node not in visited or visited[node] > stops:
                visited[node] = stops
                for neighbor, price in graph[node]:
                    heappush(pq, (cost + price, stops + 1, neighbor))
        return -1
