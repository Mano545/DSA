class Solution {
public:
    int countSubmatrices(vector<vector<int>>& arr, int k) {
        int n = arr.size(), m = arr[0].size();
        vector<vector<int>> pref(n, vector<int>(m));
        int ans = 0;
        pref[0][0] = arr[0][0];
        if(pref[0][0]<=k)ans++;
        for (int i = 1; i < m; i++) {
            pref[0][i] = arr[0][i] + pref[0][i - 1];
            if (pref[0][i] <= k)
                ans++;
        }
        for (int i = 1; i < n; i++) {
            pref[i][0] = arr[i][0] + pref[i - 1][0];
            if (pref[i][0] <= k)
                ans++;
        }
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                pref[i][j] = arr[i][j] + pref[i - 1][j] + pref[i][j - 1] -
                             pref[i - 1][j - 1];
                if(pref[i][j]<=k) ans++; 
            }
        }
        return ans;
    }
};