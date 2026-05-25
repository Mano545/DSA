class Solution {
public:
    int rec(vector<int>& nums,int d,int i,vector<int> & dp){
        if(dp[i]!=INT_MIN)return dp[i];
        int mx = INT_MIN;
        for(int j=1;j<=d;j++){
            if(i+j<nums.size() && nums[i+j]<nums[i]){
                mx = max(mx,1+rec(nums,d,j+i,dp));
            }else break;
        }
        for(int j=1;j<=d;j++){
            if(i-j>=0 && nums[i-j]<nums[i]){
                mx = max(mx,1+rec(nums,d,i-j,dp));
            }else break;
        }
        return dp[i] = (mx==INT_MIN)?0:mx;
    }
    int maxJumps(vector<int>& nums, int d) {
        int n = nums.size();
        vector<int> dp(n,INT_MIN);
        for(int i=0;i<n;i++)
        rec(nums,d,i,dp);
        int mx = INT_MIN;
        for(int i=0;i<n;i++){
             mx = max(mx,dp[i]);
        }
        return mx+1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna