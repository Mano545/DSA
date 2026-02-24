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
    // int mx = 0;
    int dfs(TreeNode* root,int sum){
        if(!root) return 0;
        int left = dfs(root->left,(sum<<1)+root->val);
        int right = dfs(root->right,(sum<<1)+root->val);
        if(!left && !right){
            //  mx+=sum;
            //  cout<<sum<<1<<" ";
             return (sum<<1)+root->val;
        }
        return left+right;
    }
    int sumRootToLeaf(TreeNode* root) {
        return dfs(root,0);
        // return mx;
    }
};