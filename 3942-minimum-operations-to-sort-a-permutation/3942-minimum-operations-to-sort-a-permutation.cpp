class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int mx = 0,id = -1;
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                mx++;
                id = i; 
            }
        }
        if(mx==0) return 0;
        if(mx>1 || nums[0] < nums[n-1]) mx = -1;
        else if(mx==1){
            mx--;
            mx+=id+1;
            
        }
        if(id+1 > (n/2) +1 && mx!=-1){
            mx = n - id-1 +2;
        }
        int mn = 1,idx = -1;
        for(int i=0;i<n-1;i++){
            if(nums[i]<nums[i+1]){
                mn++;
                idx = i;
            }
        }
        if(mn==1) return 1;
        if(mn >2 || nums[0] > nums[n-1]) mn = -1;
        else if(mn==2){
            mn--;
            mn += idx+1;
        }
        if(idx >= (n/2) && mn!=-1){
            cout<<idx;
            mn = (n - idx-1) +1;
            cout<<mn;
        }
        if(mn == -1) return mx;
        else if(mx==-1)return mn;
        else{
            return min(mx,mn);
        }
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna