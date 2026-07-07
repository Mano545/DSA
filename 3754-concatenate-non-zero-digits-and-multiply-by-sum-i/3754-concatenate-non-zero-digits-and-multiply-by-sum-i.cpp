class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum = 0,v = 0;
        long long cnt = 10;
        while(n > 0){
            int k = n%10;
            if(k!=0){
                if(sum==0)sum+=k;
                else{
                sum = k * cnt + sum;
                cnt*=10;
                }
                v+=k;
            }
            n = n/10;
        }
        return 1LL*sum*v;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna