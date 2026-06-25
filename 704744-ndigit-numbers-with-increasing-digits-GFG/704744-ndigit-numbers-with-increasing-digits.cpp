class Solution {
  public:
    vector<int> res;
    void rec(int n,int len,int val,int last){
        if(len==n){
            res.push_back(val);
        }
        for(int i =last + 1;i<10;i++){
            rec(n,len+1,val*10+i,i);
        }
    }
    vector<int> increasingNumbers(int n) {
        if(n>9)return {};
        if(n==1)res.push_back(0);
        rec(n,0,0,0);
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna