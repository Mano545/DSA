class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        queue<int> q;
        int n = arr.size();
        vector<bool> vis(n,false);
        vis[start] = true;
        if(start - arr[start] >=0){
            // cout<<start - arr[start];
        q.push(start - arr[start]);
        }
        if((start + arr[start] )<n){
            // cout<<start + arr[start];
        q.push(start + arr[start] );
        }
        while(!q.empty()){
            int tp = q.front();
            q.pop();
            cout<<tp<<endl;
            // if(vis[tp])return false;
            if(arr[tp]==0)return true;
            int left = tp - arr[tp];
            int right = tp + arr[tp];
            if(left>=0&&!vis[left])q.push(left);
            if(right<n&&!vis[right])q.push(right);
            vis[tp]=true;
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna