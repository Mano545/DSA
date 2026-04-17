class Solution {
public:
    int minMirrorPairDistance(vector<int>& nums) {
        int n = nums.size();
        map<int,int> m;
        int mn = INT_MAX;
        for(int i=0;i<n;i++){
            int val = nums[i];
            if(m.count(val)) mn = min(mn,i-m[val]);
            int rev = 0;
            while(val>0){
                rev = rev*10 + val%10;
                val = val/10;
            }
            m[rev] = i;
        }
        return mn==INT_MAX?-1:mn;
    }
};