class Solution {
public:
    
    int solve(vector<int>& nums,int i,int sum){
        if(i == nums.size())   return sum;
        
        int one = solve(nums,i+1,sum ^ nums[i]);
        int two = solve(nums,i+1,sum );

        return one + two;
    }
    int subsetXORSum(vector<int>& nums) {
       
        return solve(nums,0,0);
    }
};