class Solution {
public:
    int ans = -1;
    vector<int> state;
    vector<int> depth;

    void dfs(int node, vector<int>& edges, int d) {
        state[node] = 1;
        depth[node] = d;

        int nxt = edges[node];

        if (nxt != -1) {
            if (state[nxt] == 0) {
                dfs(nxt, edges, d + 1);
            }
            else if (state[nxt] == 1) {
                ans = max(ans, d - depth[nxt] + 1);
            }
        }

        state[node] = 2;
    }

    int longestCycle(vector<int>& edges) {
        int n = edges.size();

        state.assign(n, 0);
        depth.assign(n, 0);

        for (int i = 0; i < n; i++) {
            if (state[i] == 0) {
                dfs(i, edges, 0);
            }
        }

        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna