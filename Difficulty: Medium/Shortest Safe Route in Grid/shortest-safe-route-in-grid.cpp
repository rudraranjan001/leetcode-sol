class Solution {
  public:
    bool isSafe(vector<vector<int>> &mat, int i, int j) {
        int r = mat.size();
        int c = mat[0].size();

        // cell itself is a landmine or visited
        if (mat[i][j] != 1) return false; 

        // Check all four neighbors
        int rowDir[] = {-1, 1, 0, 0};
        int colDir[] = {0, 0, -1, 1};

        for (int k = 0; k < 4; k++) {
            int ni = i + rowDir[k];
            int nj = j + colDir[k];
            if (ni >= 0 && ni < r && nj >= 0 && nj < c && mat[ni][nj] == 0)

                // adjacent to a landmine
                return false; 
        }

        return true;
    }
    int shortestPath(vector<vector<int>> &mat) {
        // code here
        int r = mat.size();
           int c = mat[0].size();

           int rowDir[] = {-1, 1, 0, 0};
           int colDir[] = {0, 0, -1, 1};

           // {i, j, distance}
           queue<array<int,3>> q; 

           // Enqueue all safe cells in the first column
           for (int i = 0; i < r; i++) {
               if (isSafe(mat, i, 0)) {
                   q.push({i, 0, 1});

                   // mark visited
                   mat[i][0] = -1; 
               }
           }

           while (!q.empty()) {
               auto front = q.front();
               q.pop();
               int i = front[0];
               int j = front[1];
               int dist = front[2];

               // Reached last column
               if (j == c - 1) return dist;

               // Explore four directions
               for (int k = 0; k < 4; k++) {
                   int ni = i + rowDir[k];
                   int nj = j + colDir[k];

                   if (ni >= 0 && ni < r && nj >= 0 && nj < c && isSafe(mat, ni, nj)) {
                       q.push({ni, nj, dist + 1});

                       // mark visited
                       mat[ni][nj] = -1; 
                   }
               }
           }

           // no path found
           return -1; 
    }
};