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
int cnt;
public:
    int goodNodes(TreeNode* root) {
         cntGood(root,root->val);
        return cnt;
    }
    void cntGood(TreeNode* root,int mx){
        if(root==NULL)return ;
        if(root->val>=mx)cnt++;
        cntGood(root->left,max(root->val,mx));
        cntGood(root->right,max(root->val,mx));
    }
};