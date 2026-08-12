class Solution {
  public:
    void floydWarshall(vector<vector<int>> &dist) {
        int v = dist.size();
        for(int k = 0;k<v;k++){
            for(int i =0;i<v;i++){
                for(int j =0;j<v;j++){
                    if(dist[i][k]!=1e8 &&dist[k][j]!=1e8&& dist[i][j]>(dist[i][k] + dist[k][j])){
                        dist[i][j] = dist[i][k] + dist[k][j];
                    }
                }
            }
        }
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna