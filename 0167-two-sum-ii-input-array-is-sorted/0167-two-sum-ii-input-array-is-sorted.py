class Solution:
    def twoSum(self, numbers: list[int], target: int) -> list[int]:
        n = len(numbers)
        i = 0
        j = n - 1

        while j > i:
            if numbers[i] + numbers[j] == target:    return [i+1,j+1]
            elif numbers[i] + numbers[j] > target:  j -= 1
            else : i += 1
        return [-1,-1]
        