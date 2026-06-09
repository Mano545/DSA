class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long long mx = INT_MIN,mn = INT_MAX;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(mn > nums[i]){
                mn = nums[i];
            }
            if(mx<nums[i]){
                mx = nums[i];
            }
        }
        return 1LL*(mx - mn )*k;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna