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
private:
int ans;
public:
    int diameterOfBinaryTree(TreeNode* root) {
        maxdepth(root);
        return ans;
    }
    int maxdepth(TreeNode* root){
       if(root==NULL)return 0;
       int l= maxdepth(root->left);
       int r= maxdepth(root->right);
       ans=max(ans,l+r);
       return max(l,r) + 1;
    }
};