class Solution:
    def findContentChildren(self, g: List[int], s: List[int]) -> int:
        ans = 0
        s.sort()
        g.sort()
        cookie = 0
        while (cookie < len(s) and ans< len(g)):
            if (s[cookie] >= g[ans]):
                ans+=1
            cookie+=1
        return ans