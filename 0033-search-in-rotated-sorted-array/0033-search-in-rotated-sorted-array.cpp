class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0,high = nums.size()-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]==target) return mid;
            if(nums[mid]<nums[high]){
                if(target<=nums[high] && target >nums[mid]) 
                    low = mid+1;
                    else
                    high = mid-1;
                } 
            else{
                if(target <nums[mid] && target >=nums[low]) high = mid-1;
                else low = mid+1;
                }
            
        }
        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna