class Solution:
    def reverseString(self, s: List[str]) -> None:
        """
        """
        def helper(left, right):
            if left<right:
                s[left], s[right] = s[right], s[left]
                helper(left+1, right-1)
        helper(0, len(s) - 1)