class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
        int n = nums.size();
        deque<int> dp1,dp2;
        int left = 0;
        int m = 0;
        for(int i=0;i<n;i++){
            while(!dp1.empty() && nums[dp1.back()] > nums[i]) dp1.pop_back();
            dp1.push_back(i);
            while(!dp2.empty() &&nums[dp2.back()] < nums[i]) dp2.pop_back();
            dp2.push_back(i);
            if(!dp1.empty() &&dp1.front() < left) dp1.pop_front();
            if(!dp2.empty() &&dp2.front() < left) dp2.pop_front();
            int mx = dp2.front();
            int mn = dp1.front();
            while(nums[mx] - nums[mn] >limit){
                left++;
                if(!dp1.empty() &&dp1.front() < left) dp1.pop_front();
                if(!dp2.empty() &&dp2.front() < left) dp2.pop_front();
                mx = dp2.front();
                mn = dp1.front();
            }
            int len = i - left+1;
            if(m < len){
                m = len;
                cout<<left<<" "<<i<<" "<<nums[mx]<<" "<<nums[mn]<<endl;
            }
           
        }
        return m;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna