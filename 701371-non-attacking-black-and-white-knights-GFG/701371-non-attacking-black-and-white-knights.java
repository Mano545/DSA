class Solution {
    public int Possibilities(int i,int j,int n,int m){
        int dx[] = new int[]{+2,+2,-2,-2,-1,-1,1,1};
        int dy[] = new int[]{-1,1,-1,1,+2,-2,+2,-2};
        int cnt=0;
        for(int k=0;k<8;k++){
            if(i+dx[k]>=0 && i+dx[k]<n && j+dy[k]>=0 && j+dy[k]<m) cnt++;
        }
        // System.out.println(cnt);
        return cnt;
    }
    public int numOfWays(int n, int m) {
        int TotalSquares = n*m,TotalWays = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                TotalWays += (TotalSquares - Possibilities(i,j,n,m))-1;
            }
        }
        return TotalWays;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna