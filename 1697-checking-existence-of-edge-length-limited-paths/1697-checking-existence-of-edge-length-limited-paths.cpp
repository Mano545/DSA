class DSU {
public:
    vector<int> parent, rank;
    DSU(int n) {
        parent.resize(n);
        rank.resize(n, 0);
        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }
    }
    int find(int i) {
        if (parent[i] == i)
            return parent[i];
        return parent[i] = find(parent[i]);
    }
    void Union(int u, int v) {
        u = find(u);
        v = find(v);
        if (rank[u] > rank[v]) {
            parent[v] = u;
        } else if (rank[u] < rank[v]) {
            parent[u] = v;
        } else {
            parent[v] = u;
            rank[u]++;
        }
    }
};

class Solution {
public:
    vector<bool> distanceLimitedPathsExist(int n, vector<vector<int>>& edgeList,
                                           vector<vector<int>>& queries) {
        vector<bool> res(queries.size());
        for (int i = 0; i < queries.size(); i++) {
            queries[i][3] = i;
        }
        sort(edgeList.begin(), edgeList.end(),
             [](const vector<int>& a, const vector<int>& b) {
                 return a[2] < b[2];
             });

        sort(queries.begin(), queries.end(),
             [](const vector<int>& a, const vector<int>& b) {
                 return a[2] < b[2];
             });
        int j = 0;
        DSU d(n);
        for (int i = 0; i < queries.size(); i++) {
            // cout<<queries[i][0]<<" "<<queries[i][1]<<" "<<queries[i][2]<<"
            // "<<queries[i][3]<<endl;
            while (j < edgeList.size() && queries[i][2] > edgeList[j][2]) {
                d.Union(edgeList[j][0], edgeList[j++][1]);
            }
            bool r =
                d.find(queries[i][0]) == d.find(queries[i][1]) ? true : false;
            res[queries[i][3]] = r;
        }
        return res;
    }
};