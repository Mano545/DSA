class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> dp(n, vector<int>(m));
        dp[0][0]=grid[0][0];
         for (int j = 1; j < m; j++) {
            dp[0][j] = dp[0][j - 1] + grid[0][j];
        }
         for (int j = 1; j < n; j++) {
            dp[j][0] = dp[j-1][0] + grid[j][0];
        }
        for(int i=1;i<grid.size();i++){
            for(int j=1;j<grid[0].size();j++){
                dp[i][j]=grid[i][j]+ min(dp[i][j-1],dp[i-1][j]);
            }
        }
        return dp[n-1][m-1];
    }
};