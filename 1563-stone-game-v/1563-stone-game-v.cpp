class Solution {
public:
    int dp[501][501];
    int pref[501];
    int rec(int l,int r,vector<int>& s){
        if (r - l <= 1) return 0;
        if(dp[l][r]!=-1)return dp[l][r];
        // int sum = 0;
        int ans = 0;
        for (int i = l + 1; i < r; i++) {
            int ls = pref[i] - pref[l];
            int rs = pref[r] - pref[i];

            if (ls <= rs) {
                ans = max(ans, ls + rec(l, i, s));
            }

            if (rs <= ls) {
                ans = max(ans, rs + rec(i, r, s));
            }
        }

        return dp[l][r] = ans;
    }
    int stoneGameV(vector<int>& s) {
        int n = s.size();
        int total =  0;
        pref[0] = 0;
        for(int i = 1;i<=n;i++){
            pref[i] = pref[i-1] + s[i-1];
        }
        for(int i:s)total+=i;
        memset(dp,-1,sizeof(dp));
        return rec(0,n,s);
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna