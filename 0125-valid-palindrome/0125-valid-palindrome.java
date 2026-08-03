class Solution {
    public boolean isPalindrome(String s) {
        StringBuffer sb = new StringBuffer();
        for(char ch:s.toCharArray()){
            if(ch>=48 && ch<=57 ||ch>=97 && ch<=122){
                sb.append(ch);
            }
            if(ch>=65 && ch<=90){
                sb.append((char)(ch+32));
            }
        }
        // System.out.println(sb);
        int i = 0;
        int j = sb.length()-1;
        while(i<j){
            if(sb.charAt(i)!=sb.charAt(j))return false;
            i++;
            j--;
        }
        return true;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna