/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int dfs(TreeNode* root,string &res){
        if(!root) return 0;
        int l = dfs(root->left,res);
        int r = dfs(root->right,res);
        if(l==0&& r==0){
            res+=to_string(root->val)+ ",";
        }
        return 1;
    }
    bool leafSimilar(TreeNode* r1, TreeNode* r2) {
        string res1,res2;
        dfs(r1,res1);
        dfs(r2,res2);
        return res1==res2;
    }
};