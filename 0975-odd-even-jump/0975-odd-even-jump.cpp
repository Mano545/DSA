class Solution {
public:
    int oddEvenJumps(vector<int>& arr) {
        int n = arr.size();
        vector<vector<bool>> dp(n, vector<bool>(2, false));
        set<pair<int, int>> s;
        s.insert({arr[n - 1], n - 1});
        dp[n-1][0] = true ;
        dp[n-1][1] = true;
        for (int i = n - 2; i >= 0; i--) {
            auto lb = s.lower_bound({arr[i], INT_MIN});
            if (lb != s.end()) {
                dp[i][0] = dp[lb->second][1];
            }
            auto ub = s.upper_bound({arr[i],INT_MAX});
            if (ub != s.begin()&& (ub == s.end() || ub->first > arr[i])) {
                --ub;
                int v=ub->first;            
                ub=s.lower_bound({v,INT_MIN});
                dp[i][1] = dp[ub->second][0];
            }
            s.insert({arr[i], i});
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (dp[i][0])
                ans++;
        }
        return ans;
    }
};