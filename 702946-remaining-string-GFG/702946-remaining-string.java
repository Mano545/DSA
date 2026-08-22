class Solution {
    public String printString(String s, char ch, int count) {
        int idx = -1,cnt=0;
        for(int i = 0;i<s.length();i++){
           if(s.charAt(i)==ch)cnt++;
           if(cnt==count){
               idx = i;
              break;
           }
        }
        if(idx==-1)return "";
        return s.substring(idx+1);
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna