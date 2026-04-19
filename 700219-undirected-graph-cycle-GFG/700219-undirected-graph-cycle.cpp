class Solution {
public:
    vector<vector<int>> adj;
    vector<bool> vis;

    bool dfs(int node, int par) {
        vis[node] = true;

        for (int nei : adj[node]) {
            if (nei == par) continue;

            if (vis[nei]) return true;  // cycle found

            if (dfs(nei, node)) return true;
        }
        return false;
    }

    bool isCycle(int V, vector<vector<int>>& edges) {
        adj.resize(V);
        vis.assign(V, false);

        for (auto& e : edges) {
            adj[e[0]].push_back(e[1]);
            adj[e[1]].push_back(e[0]);
        }

        for (int i = 0; i < V; i++) {
            if (!vis[i]) {
                if (dfs(i, -1)) return true;
            }
        }
        return false;
    }
};