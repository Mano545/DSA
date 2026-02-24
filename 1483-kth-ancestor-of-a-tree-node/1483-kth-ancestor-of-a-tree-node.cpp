class TreeAncestor {
public:
    const int LOG = 20;
    vector<vector<int>> dp;
    TreeAncestor(int n, vector<int>& parent) {
        dp.assign(LOG,vector<int>(n,0));
        for(int i=0;i<n;i++){
            dp[0][i] = parent[i];
        }
        for(int i=1;i<LOG;i++){
            for(int j=0;j<n;j++){
                int node = dp[i-1][j];
                if(node==-1) dp[i][j] = -1;
                else
                dp[i][j] = dp[i-1][node];
            }
        }
        // for(auto i:dp){
        //     for(int j:i){
        //         cout<<j<<" ";
        //     }
        //     cout<<endl;
        // }
    }
    
    int getKthAncestor(int node, int k) {
        int count = 0;
		// We deal with k in its binary form. When we encouter its set bit, we jump to an ancestor which is at that 
		// distance from it using parent/dp array. 
        while(k>0){
            if(k&1) node = dp[count][node];
            if(node==-1) return -1;
            k>>=1;            
            count++;
        }
        return node;
    }
};

/**
 * Your TreeAncestor object will be instantiated and called as such:
 * TreeAncestor* obj = new TreeAncestor(n, parent);
 * int param_1 = obj->getKthAncestor(node,k);
 */