class Solution {
  public:
    int t[1001][1001];
    int solve(vector<int>& coins,int sum,int i){
        if(sum == 0)    return 1;
        if(i == coins.size())return 0;
        if(t[i][sum] != -1) return t[i][sum];
        if(coins[i] > sum)  return solve(coins,sum,i+1);
        
        int take = solve(coins,sum - coins[i],i);
        int not_take = solve(coins,sum,i+1);
        
        return t[i][sum] = take + not_take;
    }
    int count(vector<int>& coins, int sum) {
        // code here
        memset(t,-1,sizeof(t));
        
        return solve(coins,sum,0);
    }
};