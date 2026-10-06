class Solution {
public:
    int minAddToMakeValid(string s) {
        int open = 0,close = 0;
        for(char ch:s){
            if(ch=='(') open++;
            else{
                if(open>0) open--;
                else close++;
            }
        }
        return open+close;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna