class Solution:
    def validPath(self, n: int, edges: List[List[int]], source: int, destination: int) -> bool:
        adj = [[] for _ in range(n)]
        visited = set()
        for u, v in edges:
            adj[u].append(v)
            adj[v].append(u)
        def dfs(vertex, visited):
            if vertex == destination:
                return True
            visited.add(vertex)
            for neighbor in adj[vertex]:
                if neighbor not in visited:
                    found = dfs(neighbor, visited)
                    if (found):
                        return True
            return False
        return dfs(source, visited)