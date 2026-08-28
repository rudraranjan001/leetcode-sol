class Solution {
public:
    bool palindrome(string s){
        string str = s;
        reverse(str.begin(),str.end());
        return s == str;
    }
    int countSubstrings(string s) {
        int c = 0;
        for(int i = 0; i < s.size(); i++){
            for(int j = i; j < s.size(); j++){
                if(palindrome(s.substr(i,j-i+1)))  c++;
            }
        }
        return c;
    }
};