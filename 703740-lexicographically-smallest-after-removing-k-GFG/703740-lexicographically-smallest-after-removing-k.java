class Solution {
    public String lexicographicallySmallest(String s, int k) {
        Stack<Character> st = new Stack<>();
        int n = s.length();
        if((n & (n-1) )==0) k = k/2;
        else k*=2;
        
        if(k>=n) return "-1";
        for(int i=0;i<n;i++){
            char val = s.charAt(i);
            while(!st.isEmpty() && st.peek()>val && st.size() + (n-i) > (n-k)){
                st.pop();
            }
            st.push(s.charAt(i));
        }
        while(st.size()>(n-k)) st.pop();
        StringBuilder ss = new StringBuilder();
        while (!st.isEmpty()) {
            ss.append(st.pop());
        }
        return ss.reverse().toString();
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna