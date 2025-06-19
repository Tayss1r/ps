class Solution:
    def reductionOperations(self, nums: List[int]) -> int:
        nums.sort()
        count = 0
        ans = 0
        for i in range (1,len(nums)):
            if nums[i] != nums[i-1]:
                count += 1
            ans += count
        return ans