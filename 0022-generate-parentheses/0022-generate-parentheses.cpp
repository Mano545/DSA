class Solution {
public:
   void backtrack(int n,string p,int o,int c,int i,vector<string>& res){
    if(i==n*2){
        res.push_back(p);
        return;
    }
    if(o>c)
    backtrack(n,p+')',o,c+1,i+1,res);
    if(o<n)
    backtrack(n,p+'(',o+1,c,i+1,res);
   }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        backtrack(n,"(",1,0,1,res);
        return res;
    }
};