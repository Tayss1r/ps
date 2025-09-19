from math import isqrt
class Solution:
    def isThree(self, n: int) -> bool:
        # if n = prime² then n has exactly 3 divisors 
        root = isqrt(n)
        if root ** 2 != n:
            return False
        if root < 2:
            return False
        for i in range(2, int(root**0.5)+1):
            if root % i == 0:
                return False
        return True