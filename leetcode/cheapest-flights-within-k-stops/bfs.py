class Solution:
    def findCheapestPrice(self, n, flights, src, dst, k):
        # create adj list representation
        graph = defaultdict(list)
        for s, d, p in flights:
            graph[s].append((d, p))

        # init cost table
        cost_table = [float('inf')] * n

        # bfs traversal - (cur_node, cur_cost)
        queue = deque()
        queue.append((src, 0))

        while queue and k >= 0:
            for _ in range(len(queue)):
                cur_node, cur_cost = queue.popleft()
                for neighbor, price in graph[cur_node]:
                    if cur_cost + price < cost_table[neighbor]:
                        cost_table[neighbor] = cur_cost + price
                        queue.append((neighbor, cost_table[neighbor]))
            k -= 1

        return cost_table[dst] if cost_table[dst] != float('inf') else -1
