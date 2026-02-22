class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int n = nums.size();
        int a = 0,b = 0;
        bool f = 0;
        for(int i=0;i<n;i++){
            if(nums[i]%2==1){
                f=!f;
            }
            if((i+1)%6==0) f = !f;

            if(f) b+=nums[i];
            else a+=nums[i];
        }
        return a-b;
    }
};