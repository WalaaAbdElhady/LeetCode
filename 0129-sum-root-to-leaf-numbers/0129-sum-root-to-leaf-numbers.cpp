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
long long ans;
public:
    int sumNumbers(TreeNode* root) {
        solve(root,0);
        return ans;
    }
    void solve(TreeNode* root,int cur){
        if(root==NULL)return;
        cur=cur*10+root->val;
        if(!root->left && !root->right){
            ans+=cur;
            cur=0;
        }
        solve(root->left,cur);
        solve(root->right,cur);
    }
};