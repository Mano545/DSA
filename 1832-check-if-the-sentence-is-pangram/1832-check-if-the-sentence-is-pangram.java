class Solution {
    public boolean checkIfPangram(String sentence) {
        HashSet<Character> hs = new HashSet<>();
        for(char ch:sentence.toCharArray()){
            hs.add(ch);
        }
        // for(int i = 0;i<26;i++){
        //     if(freq[i]==0)return false;
        // }
        if(hs.size()==26)return true;
        return false;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna