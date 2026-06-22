class Solution {
    public int maxNumberOfBalloons(String text) {
        int n = text.length();
        int freq[] = new int[26];
        for(int i=0;i<n;i++){
            freq[(text.charAt(i)-'a')]++;
        }
        freq[11] = freq[11]/2;
        freq[14] = freq[14]/2;
        String b = "balon";
        n = b.length();
        int mn = Integer.MAX_VALUE;
        for(int i=0;i<n;i++){
            mn = Math.min(freq[b.charAt(i)-'a'],mn);
        }
        return mn;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna