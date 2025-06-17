class Solution:
    def findKthBit(self, n: int, k: int) -> str:
        def invert(s):
            r = ""
            for c in s:
                r += str(int(c) ^ 1)
            return r
        def tayssir(n):  
            if n == 1:
                return "0"
            last = tayssir(n - 1)
            return last + "1" + invert(last[::-1])
        
        return tayssir(n)[k - 1]