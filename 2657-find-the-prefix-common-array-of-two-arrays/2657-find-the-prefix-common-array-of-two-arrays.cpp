class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        auto dum = [&](vector<int> &A,vector<int>& B){
            int n = A.size();
            vector<int> res;
            int cnt=0;
            map<int,int> m,m1;
            for(int i=0;i<n;i++){
                m[A[i]]++;
                if(m.count(B[i])) cnt++;
                m1[B[i]]++;
                if(m1.count(A[i])&& A[i]!=B[i])cnt++;
                res.push_back(cnt);
            }
            return res;
        };
        vector<int> ans = dum(A,B);
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna