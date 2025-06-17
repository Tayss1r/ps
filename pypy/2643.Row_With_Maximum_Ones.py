class Solution:
    def rowAndMaximumOnes(self, mat: List[List[int]]) -> List[int]:
        n = len(mat)
        m = len(mat[0])
        sum = 0
        ans = 0
        for i in range(n):
            sum = 0
            for j in range(m):
                sum += mat[i][j]
            if sum>ans:
                idx = i
                ans = sum
        return [idx, ans]