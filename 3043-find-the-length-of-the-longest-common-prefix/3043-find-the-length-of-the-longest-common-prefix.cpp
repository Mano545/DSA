class Trie {
public:
    // Store array indices instead of raw pointers
    Trie * child[10]; 
    bool isChild;

    Trie() {
        for(int i=0;i<10;i++)child[i] = nullptr;
        isChild = false;
    }
};
class Solution {
public:
    
    void insert(string& a,Trie * root){
       Trie* temp = root;
       for(int i=0;i<a.size();i++){
            int idx = a[i]-'0';
            if(temp->child[idx]==nullptr){
                temp->child[idx] = new Trie();
            }
            temp = temp->child[idx];
       }
       temp->isChild = true;
    }
    int check(string & s,Trie* root){
        Trie* temp = root;
        int ix = 0;
        while(ix<s.size()){
            int idx = s[ix]-'0';
            if(temp->child[idx]!=nullptr){
                temp = temp->child[idx];
                ix++;
            }else {
                break;
            }
        }
        return ix;
    }
    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        Trie* root = new Trie();
        int mn = 0;
        for(int i=0;i<arr1.size();i++){
            string num = to_string(arr1[i]);
            insert(num,root);
        }
        for(int i=0;i<arr2.size();i++){
            string num = to_string(arr2[i]);
            int res = check(num,root);
            mn = max(mn,res);
        }
        return mn;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna