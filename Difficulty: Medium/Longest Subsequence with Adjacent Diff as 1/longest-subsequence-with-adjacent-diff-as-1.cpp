class Solution {
  public:
    int longestSubseq(vector<int>& arr) {
        // code here
        int n = arr.size();

		 // Base case: if the array has only 
		// one element
		 if (n == 1) {
		     return 1;
		 }

		 // Map to store the length of the longest subsequence
		 unordered_map<int, int> dp;
		 int ans = 1;

		 // Loop through the array to fill the map
		 // with subsequence lengths
		 for (int i = 0; i < n; ++i) {

		     // Check if the current element is adjacent
		     // to another subsequence
		     if (dp.count(arr[i] + 1) > 0 
		                    || dp.count(arr[i] - 1) > 0) {

		         dp[arr[i]] = 1 + 
		               max(dp[arr[i] + 1], dp[arr[i] - 1]);
		     } 
		     else {
		         dp[arr[i]] = 1;  
		     }

		     // Update the result with the maximum
		     // subsequence length
		     ans = max(ans, dp[arr[i]]);
		 }

		 return ans;
    }
};