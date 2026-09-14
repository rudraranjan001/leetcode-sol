class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = strs[0];
        for(string ch : strs){
            string common = "";
            int i = 0;
            while(i < ch.size() && i < s.size() &&s[i] == ch[i]){
                common += s[i];
                i++; 
            }
            s = common;
            if(s.empty())   break;
        }
        return s;
    }
};
