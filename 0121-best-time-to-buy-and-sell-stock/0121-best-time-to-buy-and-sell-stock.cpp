class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        vector<int> mn(n);
        int m = prices[0];
        int ans= 0;
        for(int i = 0;i<n;i++){
            if(m > prices[i]) m = prices[i];
            else if(m < prices[i]) ans = max(ans,prices[i]-m);
            // cout<<prices[i]<<" "<<m<<" "<<ans<<endl;
        }
        // for(int i = n-1; i >=0;i--){
        //     m = max (m,prices[i]);
        //     mn[i] = m;
        // }
        // int mx = 0;
        // for(int i = 0;i<n-1;i++){
        //     if(mn[i+1] > prices[i]) mx = max(mx,mn[i] - prices[i]);
        // }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna