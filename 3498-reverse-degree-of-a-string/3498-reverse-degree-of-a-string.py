class Solution:
    def reverseDegree(self, s: str) -> int:
        n = len(s)
        sum = 0
        for i in range(n):
            j = abs(27 - (ord(s[i]) - ord('a') + 1))
            sum += j *( i+1)
        return sum