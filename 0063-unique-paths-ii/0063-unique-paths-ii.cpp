class Solution {
public:
    vector<vector<long long>> dp;

    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        if (grid[n-1][m-1] == 1) return 0;
        dp.assign(n, vector<long long>(m, 0));
        dp[n-1][m-1] = 1;
        for (int i = n - 2; i >= 0; i--) {
            if (grid[i][m-1] == 1) dp[i][m-1] = 0;
            else dp[i][m-1] = dp[i+1][m-1];
        }

        for (int j = m - 2; j >= 0; j--) {
            if (grid[n-1][j] == 1) dp[n-1][j] = 0;
            else dp[n-1][j] = dp[n-1][j+1];
        }

        for (int i = n - 2; i >= 0; i--) {
            for (int j = m - 2; j >= 0; j--) {
                if (grid[i][j] == 1) dp[i][j] = 0;
                else dp[i][j] = dp[i+1][j] + dp[i][j+1];
            }
        }

        return dp[0][0];
    }
};
