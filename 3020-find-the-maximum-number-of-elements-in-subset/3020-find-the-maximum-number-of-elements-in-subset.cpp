class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int n = nums.size();
        map<int,int> m;
        for(int i=0;i<n;i++){
            m[nums[i]]++;
        }
        int mx = 0;
        sort(nums.begin(),nums.end());
        for(int i = 0;i < n;i++){
        long long sum = nums[i];
        int cnt = 0;
            while(sum < INT_MAX){
                if(m.count(sum)){
                    if(m[sum] >=2) cnt+=2;
                    if(m[sum]==1){
                        cnt++;
                        break;
                    }
                    sum = sum * sum;
                    if(sum==1){
                        cnt = m[sum];
                        break;
                    };
                }else{ 
                    break;}
            }
            if(cnt%2==0)cnt--;
            mx = max(mx,cnt);
        }    
        return mx;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna