class Solution {
  public:
    int minCount(vector<int>& arr) {
        // code here
        int n = arr.size();

            // Stores DP values for idx + 1.
            vector<vector<int>> next(n + 1, vector<int>(n + 1, 0));

            // Stores DP values for the current index.
            vector<vector<int>> curr(n + 1, vector<int>(n + 1, 0));

            // Fill the DP table in reverse order.
            for (int idx = n - 1; idx >= 0; idx--)
            {
                for (int incLast = -1; incLast < n; incLast++)
                {
                    for (int decLast = -1; decLast < n; decLast++)
                    {
                        // Option 1: Skip the current element.
                        int ans = 1 + next[incLast + 1][decLast + 1];

                        // Option 2: Include in increasing subsequence.
                        if (incLast == -1 || arr[idx] > arr[incLast])
                        {
                            ans = min(ans, next[idx + 1][decLast + 1]);
                        }

                        // Option 3: Include in decreasing subsequence.
                        if (decLast == -1 || arr[idx] < arr[decLast])
                        {
                            ans = min(ans, next[incLast + 1][idx + 1]);
                        }

                        curr[incLast + 1][decLast + 1] = ans;
                    }
                }

                // Move the current layer to the next layer.
                next = curr;
            }

            return next[0][0];
    }
};