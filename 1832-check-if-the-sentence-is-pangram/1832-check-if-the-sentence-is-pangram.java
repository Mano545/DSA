class Solution {
    public boolean checkIfPangram(String sentence) {
        int []freq = new int[26];
        for(char ch:sentence.toCharArray()){
            int val = ch - 'a';
            freq[val]++;
        }
        for(int i = 0;i<26;i++){
            if(freq[i]==0)return false;
        }
        return true;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna