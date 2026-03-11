class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0) return 1;
        int res = 0,exp = 1;
        while(n>0){
            if((n&1)==0) res+=exp;
            exp*=2;
            n=n>>1;
        }
        return res;
    }
};