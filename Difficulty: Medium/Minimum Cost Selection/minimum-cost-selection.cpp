class Solution {
  public:
    int t[100001][4];
    int solve(vector<vector<int>>& mat, int day, int last){
        if(day >= mat.size()) return 0;
        if(t[day][last] != -1)  return t[day][last];   
        int mini =  INT_MAX;
        for(int i = 0; i < 3; i++){
            if(i != last){
                int total = mat[day][i] + solve(mat,day+1,i);
                mini = min(total , mini);
            }
        }
        return t[day][last] = mini;
    }
    
    int minCost(vector<vector<int>>& mat) {
        // code here
        memset(t,-1,sizeof(t));
        return solve(mat,0,4);
    }
};