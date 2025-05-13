class Solution:
    def findWords(self, wds: List[str]) -> List[str]:
        r1 = set("qwertyuiop")
        r2 = set("asdfghjkl")
        r3 = set("zxcvbnm")
        res = []
        for w in wds:
            s = set(w.lower())
            if s<=r1 or s<=r2 or s<=r3:
                res.append(w)
        return res
