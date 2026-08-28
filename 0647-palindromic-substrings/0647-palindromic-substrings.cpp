class Solution {
public:
    int t[1001][1001];
    bool palindrome(string &s, int i, int j){
        if(i > j) return  true;

        if(t[i][j] != -1) return t[i][j];

        if(s[i] == s[j])    return t[i][j] = palindrome(s,i+1,j-1);

        return false;
    }
    int countSubstrings(string s) {
        memset(t,-1,sizeof(t));
        int n = s.size();
        int c = 0;
        for(int i = 0; i < n; i++){
            for(int j = i; j < n; j++){
                if(palindrome(s,i,j))  c++;
            }
        }
        return c;
    }
};