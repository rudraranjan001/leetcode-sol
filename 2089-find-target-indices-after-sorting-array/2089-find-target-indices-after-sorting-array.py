class Solution:
    def targetIndices(self, nums: list[int], target: int) -> list[int]:
        new_list = sorted(nums)
        n = len(nums)
        res = []
        for i in range(n):
            if new_list[i] == target:
                res.append(i)
        return res