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
    TreeNode* invertTree(TreeNode* root) {
        // base case
        if(root==NULL)return NULL;
        //
        TreeNode* L = root->left;
        TreeNode* R = root->right;
        root->left = R;
        root->right = L;
        invertTree(root->left);
        invertTree(root->right);
        return root;
    }
};