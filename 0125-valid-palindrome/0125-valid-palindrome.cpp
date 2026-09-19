class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int i = 0, j = n - 1;

        while(i < j){
            while(!((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || ( s[i] >= '0' && s[i] <= '9')) && i < j)   i++;
            while(!((s[j] >= 'a' && s[j] <= 'z') || (s[j] >= 'A' && s[j] <= 'Z') || ( s[j] >= '0' && s[j] <= '9')) && j > i) j--;

            char ch1 = tolower(s[i]);
            char ch2 = tolower(s[j]);

            if(ch1 != ch2)  return false;

            j--;
            i++;
        }
        return true;
    }
};