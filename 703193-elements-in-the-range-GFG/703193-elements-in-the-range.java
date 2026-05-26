class Solution {
    public boolean checkElements(int start, int end, int[] arr) {
        int freq[] = new int[100000+1];
        int n = arr.length;
        for(int i=0;i<n;i++){
            freq[arr[i]]++;
        }
        for(int i= start;i<=end;i++){
            if(freq[i]==0)return false;
        }
        return true;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna