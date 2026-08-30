class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int minInd = min_element(nums.begin(), nums.end()) - nums.begin();
        int maxInd = max_element(nums.begin(), nums.end()) - nums.begin();
        int n = nums.size();
        if(n == 1)    return 1;

        int left = min(minInd,maxInd);
        int right = max(minInd,maxInd);
        
        int front = right + 1;

        int back = n - left;
        
        int frontback = (left + 1) + (n - right);

        return min({front,back,frontback});
        
    }
};