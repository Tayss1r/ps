class Solution:
    def dividePlayers(self, sk: List[int]) -> int:
        sk.sort()
        t = sum(sk)
        if t % (len(sk)//2) != 0:
            return -1
        target = t // (len(sk)//2)
        ans = 0
        l, r = 0, len(sk)-1
        while l < r:
            if sk[l]+sk[r] != target:
                return -1
            ans += sk[l] *sk[r]
            l +=1
            r -=1
        return ans
