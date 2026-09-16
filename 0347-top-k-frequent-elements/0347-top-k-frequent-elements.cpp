class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mapp;
        int n = nums.size();

        for(int x : nums){
            mapp[x]++;
        }

        vector<vector<int>> freq(n+1);
        for(auto x: mapp){
            freq[x.second].push_back(x.first);
        }

        vector<int> result;
        
            for(int i = n; i >= 0; i--){
                if(!freq[i].empty()){
                    if(!k)  return result;
                    for(int j = 0; j < freq[i].size(); j++){
                        result.push_back(freq[i][j]);
                        k--;
                    }
                }
            }
        return result;

    }
};