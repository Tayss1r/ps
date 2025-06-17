class Solution:
    def maxAdjacentDistance(self, nums: List[int]) -> int:
        ans  = abs(nums[0]-nums[len(nums)-1])

        for i in range (1,len(nums)):
            ans = max(ans, abs(nums[i-1]-nums[i]))
        return ans