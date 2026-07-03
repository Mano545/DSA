class Solution {
public:
    int findMaxPathScore(vector<vector<int>>& edges, vector<bool>& online, long long k) {
        int n = online.size();
        vector<vector<pair<int,int>>> adj(n);
        vector<int> degree(n,0);
        int mx = 0;
        for(auto &e:edges){
            int u = e[0];
            int v = e[1];
            int w = e[2];
            adj[u].push_back({v,w});
            degree[v]++;
            mx = max(mx,w);
        }
        queue<int> q;
        for(int i = 0;i<n;i++){
            if(degree[i]==0)
            q.push(i);
        }
        vector<int> topo;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            topo.push_back(node);
            for(auto [i,j]:adj[node]){
                degree[i]--;
                if(degree[i]==0)q.push(i);
            }
        }
        auto check = [&](long long mid){
            vector<long long> dp(n,LLONG_MAX);
            dp[0] = 0;
            for(int i:topo){
                if(dp[i]==LLONG_MAX)continue;
                for(auto [v,w]:adj[i]){
                    if(online[v] && w >=mid){
                        dp[v] = min(dp[v],dp[i]+w);
                    // cout<<i<<" "<<v<<" "<<dp[v]<<endl;
                    }
                }
            }
            // cout<<n-1<<endl;
            return dp[n-1]<=k;
        };
        long long low = 0;
        long long high = mx;
        long long res = -1;
        while(low<=high){
            long long mid = low + (high - low)/2;
            if(check(mid)){
                res = mid;
                low = mid+1;
            }else high = mid-1;
        }
        return (int)res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna