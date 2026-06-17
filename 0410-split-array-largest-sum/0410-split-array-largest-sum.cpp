class Solution {
public:
    bool check(int mid,vector<int>& nums,int k){
        int res = 1,sum=0;
        for(int i=0;i<nums.size();i++){
            if(sum + nums[i]<=mid){
                sum+=nums[i];
            }else{
                sum =  nums[i];
                res++;
            }
        }
        return res<=k;
    }
    int splitArray(vector<int>& nums, int k) {
        int n = nums.size()-1; 
        int total = 0,mx = INT_MIN;
        for(int i:nums){
            total+=i;
            mx = max(mx,i);
        }
        int low = mx;
        int high = total;
        int ans = -1;
        while(low<=high){
            int mid = (low+high)/2;
            if(check(mid,nums,k)){
                high = mid - 1;
            }else{
                low = mid + 1;
                ans = mid;
            }
        }
        return low;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna