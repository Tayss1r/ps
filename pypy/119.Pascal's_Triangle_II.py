class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
        def getTriangle(rowIndex):
            if (rowIndex == 0):
                return [1]
            prev = getTriangle(rowIndex-1)
            row = [1]
            for i in range(1, len(prev)):
                row.append(prev[i - 1] + prev[i])
            row.append(1)
            return row
        return getTriangle(rowIndex)