class Solution {
    public int missingMultiple(int[] nums, int k) {
        HashMap<Integer,Integer> mp = new HashMap<>();
        for(int i:nums){
            mp.put(i,1);
        }
        int n = nums.length;
        int val = 1;
        while(n-->0){
            if(!mp.containsKey(k*val))break;
            val++;
        }
        return k*val;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna