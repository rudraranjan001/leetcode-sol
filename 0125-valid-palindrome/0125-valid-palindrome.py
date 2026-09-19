class Solution:
    def isPalindrome(self, s: str) -> bool:
        n = len(s)
        i = 0
        j = n - 1

        while i < j :
            while not (('a' <= s[i] <= 'z') or ('A' <= s[i] <= 'Z') or ('0' <= s[i] <= '9')) and i < j:
                i += 1
            while not (('a' <= s[j] <= 'z') or ('A' <= s[j] <= 'Z') or ('0' <= s[j] <= '9') )and i < j:
             j -= 1
            
            if s[i].lower() != s[j].lower() :   return False

            i += 1
            j -= 1
        return True