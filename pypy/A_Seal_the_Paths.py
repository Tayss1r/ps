import sys
sys.setrecursionlimit(1 << 25)
     
n, m, k = map(int, input().split())
grid = [list(input()) for _ in range(n)]
visited = [[False] * m for _ in range(n)]
 
# Count total empty cells
empty_cells = sum(row.count('.') for row in grid)
 
# How many cells to keep as "."
to_keep = empty_cells - k
 
# Direction vectors: up, down, left, right
dirs = [(-1, 0), (1, 0), (0, -1), (0, 1)]
 
# DFS to keep the first "to_keep" cells connected
result = []
 
def dfs(x, y):
    if len(result) >= to_keep:
        return
    visited[x][y] = True
    result.append((x, y))
    for dx, dy in dirs:
        nx, ny = x + dx, y + dy
        if 0 <= nx < n and 0 <= ny < m and not visited[nx][ny] and grid[nx][ny] == '.':
            dfs(nx, ny)
 
# Start DFS from the first found "."
for i in range(n):
    for j in range(m):
        if grid[i][j] == '.':
            dfs(i, j)
            break
    else:
        continue
    break
 
for i in range(n):
    for j in range(m):
        if grid[i][j] == '.' and (i, j) not in result:
            grid[i][j] = 'X'
 
# Output result
for row in grid:
    print(''.join(row))