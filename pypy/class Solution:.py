class Solution:
    def lemonadeChange(self, bills: List[int]) -> bool:
        if bills[0] > 5:
            return False
        change = 0
        for bill in bills:
            if bill == 5:
                change += 5
            if change < bill - 5:
                return False
        return True 