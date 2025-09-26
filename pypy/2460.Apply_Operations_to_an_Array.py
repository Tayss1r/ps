class Solution:
    def applyOperations(self, nums: List[int]) -> List[int]:
        sol = []
        for i in range(len(nums)):
            if i < len(nums) - 1 and nums[i] == nums[i + 1]:
                nums[i] *= 2
                nums[i + 1] = 0
            
            if nums[i] != 0:
                sol.append(nums[i])
        return sol + ([0] * (len(nums) - len(sol)))