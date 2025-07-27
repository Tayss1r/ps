from collections import defaultdict, deque
from typing import List
class Solution:
    def sortItems(self, n: int, m: int, group: List[int], beforeItems: List[List[int]]) -> List[int]:
        graph_item = defaultdict(list)
        in_item = [0]*n
        graph_group = defaultdict(list)
        for i in range(n):
            if group[i] == -1:
                group[i] = m
                m += 1
        in_group = [0]*m
        for i in range(n):
            for j in beforeItems[i]:
                graph_item[j].append(i)
                in_item[i] += 1
                if group[i] != group[j]:
                    graph_group[group[j]].append(group[i])
                    in_group[group[i]] += 1
        def topo_sort(graph, indegree, lenn):
            queue = deque([i for i in lenn if indegree[i] == 0])
            res = []
            while queue:
                node = queue.popleft()
                res.append(node)
                for n in graph[node]:
                    indegree[n] -= 1
                    if indegree[n] == 0:
                        queue.append(n)
            return res if len(res) == len(lenn) else []
        items = topo_sort(graph_item, in_item, list(range(n)))
        groups = topo_sort(graph_group, in_group, list(range(m)))
        if not items or not groups:
            return []
        ans = defaultdict(list)
        for i in items:
            ans[group[i]].append(i)
        final_ans = []
        for g in groups:
            final_ans += ans[g]
        return final_ans