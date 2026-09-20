class Solution:
    def maxArea(self, height: list[int]) -> int:
        maxwater = 0
        i= 0
        n = len (height)
        j = n - 1
        area = 1
        while i < j:
            area = min(height[i] , height[j]) * (j - i)
            maxwater = max(area, maxwater)

            if height[i] > height[j] : j -= 1
            else: i+= 1
        return maxwater