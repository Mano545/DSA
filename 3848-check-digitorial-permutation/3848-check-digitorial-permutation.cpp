class Solution {
public:
    vector<int> fact;
    unordered_multiset<int> arr;
    bool isSame(int ans){
        while(ans){
            int k = ans%10;
            auto it = arr.find(k);
            if(it==arr.end()) return false;
            arr.erase(it);
            ans/=10;
        }
        if(arr.size()>0) return false;
        return true;
    }
    bool isDigitorialPermutation(int n) {
        if(n==1||n==2)return true;
        fact.assign(10,0);
        fact[0] = 1;
        for(int i = 1;i<10;i++){
            fact[i] = fact[i-1]*i;
        }
        int k=n;
        int ans=0;
        while(k>0){
            int r = k%10;
            arr.insert(r);
            ans+=fact[r]; 
            k/=10;
        }
        cout<<ans;
        return isSame(ans);
    }
};