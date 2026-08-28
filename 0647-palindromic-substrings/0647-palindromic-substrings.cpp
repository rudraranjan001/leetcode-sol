class Solution {
public:
    bool palindrome(string s){
        string str = s;
        reverse(str.begin(),str.end());
        return s == str;
    }
    int countSubstrings(string s) {
        int n = s.size();
        int c = 0;
        for(int i = n-1; i >= 0; i--){
            for(int j = i; j < n; j++){
                if(palindrome(s.substr(i,j-i+1)))  c++;
            }
        }
        return c;
    }
};