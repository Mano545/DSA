class Solution {
  public:
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        vector<vector<int>> adj(V);
        vector<int> degree(V,0),res;
        for(auto &e:edges){
            int u = e[0];
            int v = e[1];
            adj[u].push_back(v);
            degree[v]++;
        }
        priority_queue<int,vector<int>,greater<int>> pq;
        for(int i = 0;i<V;i++){
            if(degree[i]==0)pq.push(i);
        }
        while(!pq.empty()){
            int top = pq.top();
            pq.pop();
            res.push_back(top);
            for(int i:adj[top]){
                degree[i]--;
                if(degree[i]==0){
                     pq.push(i);
                }
            }
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna