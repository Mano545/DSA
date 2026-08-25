class Solution {
    public List<String> midPattern(String s) {
        // code here
        int n = s.length();
		int size = 0;
		int mid = n/2;
		List<String> l = new ArrayList<>();
		StringBuffer sb = new StringBuffer();
		while(size<n){
		   int idx = (mid%n);
		   sb.append(s.charAt(idx));
		   l.add(sb.toString());
		mid++;
		size++;
		} 
		return l;
    }
}

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna