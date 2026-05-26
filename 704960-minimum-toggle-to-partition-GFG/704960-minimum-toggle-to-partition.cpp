class Solution {
  public:
    int minToggle(vector<int>& arr) {
        int n = arr.size();
        int one  = 0,zero = 0;
        for(int i=0;i<n;i++){
            if(arr[i]==1)one++;
        }
        int cnt = one;
        for(int i = n-1;i>=0;i--){
            if(arr[i]==0){
                zero++;
            }else{
                one--;
            }
            cnt = min(cnt,zero+one);
        }
        return cnt;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna