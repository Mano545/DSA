class Solution {
public:
    vector<int> pathsWithMaxScore(vector<string>& board) {
        int n = board.size();
        int m = n;
        const int MOD = 1e9+7;
        board[0][0] = '0';
        board[n-1][n-1] = '0';
        // if(n==2 && board[0][1] == 'X' && board[1][0] == 'X'){
        //     return {0,1};
        // }
        vector<vector<vector<int>>> dp(n,vector<vector<int>>(m,vector<int>(2,0)));
        dp[0][0][1] = 1;
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(board[i][j] == 'X'){
                    // cout<<0<<" ";
                    continue;
                }
                int score = board[i][j]-'0';
                int val = dp[i][j][0];
                if((i==0 && j-1==0)||(j>0 && dp[i][j-1][0]>0)){
                    if(dp[i][j-1][0]+score > dp[i][j][0] ){
                        dp[i][j][1] = dp[i][j-1][1];
                        dp[i][j][0] = dp[i][j-1][0]+score;
                    }
                }

                if((i-1==0 && j==0) || (i>0 && dp[i-1][j][0]>0)){
                    if(dp[i-1][j][0]+score > dp[i][j][0] ){
                        dp[i][j][1] = dp[i-1][j][1];
                        dp[i][j][0] = dp[i-1][j][0]+score;
                    }else if(dp[i][j][0] == dp[i-1][j][0]+score){
                    dp[i][j][1] =(dp[i][j][1] +  dp[i-1][j][1])%MOD;
                }
                }
                if((i-1==0 && j-1==0)||(i>0&&j>0&&dp[i-1][j-1][0]>0)){
                    if(dp[i-1][j-1][0]+score > dp[i][j][0] ){
                        dp[i][j][1] = dp[i-1][j-1][1];
                        dp[i][j][0] = dp[i-1][j-1][0]+score;
                    }else if(dp[i][j][0] == dp[i-1][j-1][0]+score){
                    dp[i][j][1] = (dp[i][j][1] + dp[i-1][j-1][1])%MOD;
                }
                }
                // if(dp[i][j][0]!=0)
                // dp[i][j][0] +=score;
                // cout<<dp[i][j][0]<<" ";
            }
            // cout<<endl;
        }
        return dp[n-1][m-1];
}
};






































// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna