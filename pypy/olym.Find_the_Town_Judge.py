class Solution:
    def findJudge(self, n: int, trust: List[List[int]]) -> int:
        indeg = [0] * (n+1)
        outdeg = [0] * (n+1)

        for row in trust:
            indeg[row[1]] += 1
            outdeg[row[0]] += 1
    
        for i in range (1,n+1):
            if indeg[i] == n-1 and outdeg[i] == 0:
                return i
        return -1
