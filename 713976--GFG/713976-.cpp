class Solution {
  public:
    vector<int> optimalArray(vector<int> &arr) {
        vector<int>ans;
        ans.push_back(0);
        for(int i=1;i<arr.size();i++)
        {
            ans.push_back(ans.back()+(arr[i]-arr[i/2]));
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna