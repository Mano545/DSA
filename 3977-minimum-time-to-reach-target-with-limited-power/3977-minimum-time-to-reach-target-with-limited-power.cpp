class Solution {
public:
    using ll = long long;
    const ll INF = LLONG_MAX;

    vector<long long> minTimeMaxPower(int n, vector<vector<int>>& edges,
                                      int power, vector<int>& cost,
                                      int source, int target) {

        if (source == target)
            return {0, power};

        vector<vector<pair<int, int>>> adj(n);

        for (auto &e : edges) {
            adj[e[0]].push_back({e[1], e[2]});
        }

        vector<vector<ll>> dist(n, vector<ll>(power + 1, INF));

        priority_queue<
            tuple<ll, int, int>,
            vector<tuple<ll, int, int>>,
            greater<tuple<ll, int, int>>
        > pq;

        dist[source][power] = 0;
        pq.emplace(0LL, source, power);

        while (!pq.empty()) {

            auto [time, u, p] = pq.top();
            pq.pop();

            if (time != dist[u][p])
                continue;

            if (p < cost[u])
                continue;

            int np = p - cost[u];

            for (auto [v, w] : adj[u]) {

                ll nt = time + (ll)w;

                if (dist[v][np] > nt) {
                    dist[v][np] = nt;
                    pq.emplace(nt, v, np);
                }
            }
        }

        ll bestTime = INF;
        int bestPower = -1;

        for (int p = 0; p <= power; p++) {
            if (dist[target][p] < bestTime) {
                bestTime = dist[target][p];
                bestPower = p;
            } else if (dist[target][p] == bestTime) {
                bestPower = max(bestPower, p);
            }
        }

        if (bestTime == INF)
            return {-1, -1};

        return {bestTime, bestPower};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna