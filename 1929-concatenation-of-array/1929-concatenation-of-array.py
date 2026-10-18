class Solution:
    def getConcatenation(self, nums: list[int]) -> list[int]:
        n = len(nums)
        for i in range(n):
            nums.append(nums[i])
        return nums