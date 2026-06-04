class Solution {
  public:
    int maxSubstring(string &s) {
        int zero = 0,one = 0,mx = INT_MIN;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0')zero++;
            else one++;
            if(zero<one){
                zero=0;
                one=0;
            }
            if(zero>one)
            mx = max(mx,zero - one);
        }
        if(mx==INT_MIN)return -1;
        return mx;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna