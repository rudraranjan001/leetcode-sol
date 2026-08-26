class Solution {
public:
    int t[100010];
    int solve(vector<int>& c,int amount){
        if(amount == 0)return 0;
        if(t[amount] != -1) return t[amount];

        int ans = INT_MAX;
        for(int coin : c){
            if(amount - coin >= 0)
                ans = min(ans + 0LL,solve(c,amount - coin) + 1LL);
        }
        return t[amount] = ans;
    }
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        memset(t,-1,sizeof(t));
        int ans = solve(coins,amount);
        return ans == INT_MAX ? -1 : ans;
    }
};