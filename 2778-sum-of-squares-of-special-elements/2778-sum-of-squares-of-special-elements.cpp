class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int total = 0;
        int n = nums.size();
        for(int i = 1;i<=n;i++){
            if(n%i==0){
                total+= nums[i-1]*nums[i-1];
            }
        }
        return total;
    }   
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna