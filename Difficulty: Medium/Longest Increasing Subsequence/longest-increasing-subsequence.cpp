class Solution {
  public:
    int t[1001][1002];
    int solve(vector<int>& nums,int i, int prev){
        if(i == nums.size())    return 0;
        
        if(t[i][prev + 1] != -1)    return t[i][prev+1];
        
        int take = 0;
        if(prev == -1 || nums[i] > nums[prev]) take = solve(nums,i+1,i) + 1;
        
        int not_take = solve(nums,i+1,prev);
        return t[i][prev+1] = max(take,not_take);
    }
    int lis(vector<int>& arr) {
        // code here
        int n = arr.size();
        memset(t,-1,sizeof(t));
        return solve(arr,0,-1);
    }
};