class Solution:
    def islandPerimeter(self, grid: List[List[int]]) -> int:
        directions = [(1,0),(0,1),(-1,0),(0,-1)]
        visited = set()
        def inbound(row, col):
            return (0 <= row < len(grid)) and (0 <= col < len(grid[0]))
        
        def dfs(row, col):
            perimeter = 0
            # If the neighbor is out of bounds or water add 1
            if not inbound(row, col) or grid[row][col] == 0:
                return 1
            visited.add((row,col))
            # Check the 4 directions of that cell
            for drow, dcol in directions:
                new_row = row + drow
                new_col = col + dcol
                if (new_row, new_col) not in visited:
                    perimeter += dfs(new_row, new_col)
            return perimeter
        for i in range(len(grid)):
            for j in range(len(grid[0])):
                if grid[i][j] == 1:
                    return dfs(i,j)