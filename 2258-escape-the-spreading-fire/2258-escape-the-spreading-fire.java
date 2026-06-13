class Solution {
    static int[] dx = new int[]{-1,0,0,1};
    static int[] dy = new int []{0,-1,1,0};
    static int[][] fire ;
    static int n,m;
    public void bfs(int grid[][]){
         n = grid.length;
         m = grid[0].length;
        Queue<int[]> q = new LinkedList<>();
        fire = new int[n][m];
        for(int i=0;i<n;i++){
            Arrays.fill(fire[i],Integer.MAX_VALUE);
            for(int j=0;j<m;j++){
                if(grid[i][j] == 1){
                    q.add(new int[]{i,j,1});
                    fire[i][j] = 0;
                }else if(grid[i][j]==2){
                    fire[i][j] = -1;
                }
            }
        }
        while(!q.isEmpty()){
            int []top = q.remove();
            int x = top[0];
            int y = top[1];
            int z = top[2];
            grid[x][y] = -1;
            for(int i=0;i<4;i++){
                int nx = x + dx[i];
                int ny = y + dy[i];
                if(nx>=0 && nx<n && ny>=0 &&ny<m && grid[nx][ny]==0){
                    fire[nx][ny] = z;
                    q.add(new int[]{nx,ny,z+1});
                }
            
            }
        }
    }
    public boolean check(int mid){
        Queue<int[]> q = new LinkedList<>();
        if(fire[0][0]>=mid)
        q.add(new int[]{0,0});
        int [][]vis = new int[n][m];
        while(!q.isEmpty()){
            mid++;
            int size = q.size();
            for(int j=0;j<size;j++){
            int top[] = q.remove();
            int x = top[0];
            int y = top[1];
            if(x==n-1 && y==m-1) return true;
            for(int i=0;i<4;i++){
                int nx = x + dx[i];
                int ny = y + dy[i];
                if(nx>=0 && nx<n && ny>=0 &&ny<m && fire[nx][ny]>mid && vis[nx][ny]==0){
                    q.add(new int[]{nx,ny});
                    vis[nx][ny] = 1;
                }
                if(nx==n-1 && ny==m-1 && fire[nx][ny]==mid)return true;
            }
            }
        }
        return false;
    }
    public int maximumMinutes(int[][] grid) {
        bfs(grid);
        int low = 0;
        int high = (int)1e9;
        int ans = -1;
        while(low<=high){
            int mid = (low+high)/2;
            if(check(mid)){
                low = mid+1;
                ans = mid;
            }else high = mid - 1;
        }
        if(ans==-1) return -1;
        return ans;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna