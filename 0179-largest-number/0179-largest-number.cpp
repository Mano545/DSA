class Solution {
public:
    string largestNumber(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0;i<n;i++){
            for(int j = 0;j <n-i-1;j++){
                string a = to_string(nums[j]) + to_string(nums[j+1]);
                string b = to_string(nums[j+1]) + to_string(nums[j]);
                if(b > a) {
                    int t = nums[j];
                    nums[j] = nums[j+1];
                    nums[j+1] = t;
                }
            }
        }
        string s;
        for(int i:nums){
            s.append(to_string(i));
        }
        if(s[0]=='0')return "0";
        return s;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna