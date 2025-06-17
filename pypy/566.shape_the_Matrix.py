class Solution:
    def matrixReshape(self, mat: List[List[int]], r: int, c: int) -> List[List[int]]:
        n = len(mat)
        m = len(mat[0])
        if (r*c != n*m):
            return mat
        
        res = [[0]*c for _ in range(r)]
        arr = []
        for i in range(n):
            for j in range(m):
                arr.append(mat[i][j])
        t = 0
        for i in range(r):
            for j in range(c):
                res[i][j] = arr[t]
                t+=1
        return res
