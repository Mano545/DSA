class Solution {
    public ArrayList<Integer> bellmanFord(int V, int[][] edges, int src) {
        ArrayList<Integer> dist = new ArrayList<>();
        // int []dist = new 
        for(int i = 0;i<V;i++)dist.add((int)1e8);
        
        dist.set(src,0);
        
        for(int i =0;i<V;i++){
            
            for(int e[]:edges){
                int u = e[0];
                int v = e[1];
                int w = e[2];
                if( dist.get(u) != 1e8 && dist.get(v) > dist.get(u)+w){
                    dist.set(v,dist.get(u)+w);
                    if(i==V-1)return new ArrayList(Arrays.asList(-1));
                }
            }
        }
        return dist;
    }
}


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna