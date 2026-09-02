class Solution {
  public:
    int t[100001];
    int solve(vector<int>& height, int i){
        if(i ==  height.size() - 1) return 0;
        if(t[i] != -1)    return t[i];
        
        int one = solve(height,i+1) + abs(height[i] - height[i+1]);
        
        int two = INT_MAX;
        if(i+2 < height.size())
            two = solve(height, i + 2) + abs(height[i] - height[i+2]);
        
        return t[i] =  min(one,two);
    } 
    int minCost(vector<int>& height) {
        // Code here
        memset(t,-1,sizeof(t));
        return solve(height,0);
    }
};