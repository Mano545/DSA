class Solution {
public:
int earliestFinishTime(vector<int>& ls, vector<int>& ld,
                       vector<int>& ws, vector<int>& wd) {
    int ans = 1e9;
    for(int i=0;i<ls.size();i++){
        for(int j=0;j<ws.size();j++){
            
            int st1 = max(0 , ls[i]);
            int en1 = st1 + ld[i];
            int st2 = max(en1 , ws[j]);
            int en2 = st2 + wd[j];
            ans = min(ans , en2 );

            int st3=max(0, ws[j]);
            int en3 = st3+wd[j];
            int st4 = max( en3, ls[i]);
            int en4 = st4+ld[i];
            ans = min( ans , en4 );
        }
    }
    return ans;
}

};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna