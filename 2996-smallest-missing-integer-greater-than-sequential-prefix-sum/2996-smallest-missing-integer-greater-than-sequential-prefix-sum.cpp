class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int mx = 0,c=nums[0],i;
        set<int> m(nums.begin(),nums.end());
        // for(int i:nums)m.insertr;
        for(i=0;i<nums.size()-1;i++){
            if (nums[i]==nums[i+1]-1){
                c+=nums[i+1];
            }
            else{
                break;
            }

        }
        while(true){
            if(m.count(c)){
                c++;
            }
            else break;
        }
        return c;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna