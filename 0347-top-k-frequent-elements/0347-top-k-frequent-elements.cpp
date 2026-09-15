class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        //brute force
        unordered_map<int,int> mappp;
        for(int x : nums){
            mappp[x]++;
        }

        vector<int> result;

        while(k--){
            int key = 0;
            int ele = 0;
            for(auto x : mappp){
                if(key < x.second){
                    key = x.second;
                    ele = x.first;
                }
            }
            cout<<ele<<" "<<key<<endl;
            mappp[ele] = 0;
            result.push_back(ele);
        }

        return result;

    }
};