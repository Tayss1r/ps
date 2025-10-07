from collections import defaultdict
import heapq
from typing import List

class Solution:
    def networkDelayTime(self, times: List[List[int]], n: int, k: int) -> int:
        graph = defaultdict(list)
        for u, v, w in times:
            graph[u].append((v,w))
        maxt = 0
        heap = [(0, k)]
        processed = set()
        while heap:
            curr_time, curr_node = heapq.heappop(heap)
            if curr_node in processed:
                continue
            processed.add(curr_node)
            maxt = max(maxt, curr_time)
            for child, time in graph[curr_node]:
                if child not in processed:
                    heapq.heappush(heap,(time+curr_time,child))
        if len(processed) == n:
            return maxt
        return -1
            