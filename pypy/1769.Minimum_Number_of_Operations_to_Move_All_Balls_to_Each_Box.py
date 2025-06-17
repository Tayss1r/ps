class Solution:
    def minOperations(self, boxes: str) -> List[int]:
        ans = []
        for i in range(len(boxes)): 
            sum = 0
            for j in range(len(boxes)):
                if i == j: 
                    continue
                else:
                    if boxes[j] == '1':
                        sum += abs(i-j)
            ans.append(sum)          
        return ans