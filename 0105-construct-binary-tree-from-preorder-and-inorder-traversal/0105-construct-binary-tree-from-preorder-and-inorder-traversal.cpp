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
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int idx = 0;
        return build(preorder,inorder, idx,0,inorder.size()-1);
    }
    TreeNode* build(vector<int>& preorder, vector<int>& inorder, int& idx, int l, int r){
        if(l > r)return NULL;
        TreeNode* root = new TreeNode(preorder[idx]);
        int split = find(inorder.begin(),inorder.end(),preorder[idx])- inorder.begin();
        idx++;
        root->left = build(preorder, inorder, idx, l, split - 1);
        root->right = build(preorder, inorder, idx, split + 1, r);
        return root;
    }
};