class Solution {
public:
    int t[101];
    int solve(string &s, int i){
        if(i == s.size())   return t[i] = 1;
        if(t[i] != -1)  return t[i];
        if(s[i] == '0') return t[i] = 0;

        int result = solve(s,i+1);

        if(i+1 < s.size()){
            if(s[i] == '1' || (s[i] == '2' && s[i+1] <= '6'))   result += solve(s,i+2);
        }
        return t[i] = result;
    }
    int numDecodings(string s) {
        memset(t,-1,sizeof(t));
        return solve(s,0);
    }
};