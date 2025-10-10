from typing import List
class Solution:
    def minProcessingTime(self, processorTime: List[int], tasks: List[int]) -> int:
        processorTime.sort()
        tasks.sort(reverse=True)
        maxx, cpu, count = 0, 0,0
        for i in range(len(tasks)):
            if count == 4:
                count = 0
                cpu += 1
            maxx = max(maxx, processorTime[cpu]+tasks[i])
            count += 1
        return maxx
