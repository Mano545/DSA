class Solution {
public:
    long long countCommas(long long n) {
        long long ans = 0;
        long long st = 1000;
        while(st<=n){
            ans+=n-st+1;
            st*=1000;
        }
        return ans;        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna