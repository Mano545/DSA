class Solution {
    public:

      int mod = 1e9+7;
      int solve(string& s , int num , int idx , int n , int unit , vector<vector<int>>& dp){
          if(idx >= s.size()){
              return (num % n == 0) ? 1 : 0;
          }
          if(dp[idx][num%n] != -1){
              return dp[idx][num%n];
          }
          int digit = s[idx] - '0';
          int take = solve(s , (num * unit + digit)%n , idx + 1 , n , 10 , dp);
          int skip = solve(s , num%n , idx + 1 , n , (unit == 1) ? 1 : 10 , dp);

          return dp[idx][num%n] = (take + skip)%mod;
      }
      int countSubsequences(string& s, int n) {
          // code here

          vector<vector<int>> dp(s.size() + 1 , vector<int>(n , -1));

          return solve(s , 0 , 0 , n , 1,dp) - 1;
      }
  };

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna