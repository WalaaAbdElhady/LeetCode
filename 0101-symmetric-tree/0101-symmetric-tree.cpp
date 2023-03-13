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
    bool isSymmetric(TreeNode* root) {
        //root->right=invert(root->right);
        return isSame(root,root);
    }
    bool isSame(TreeNode* a,TreeNode* b){
        if(a==NULL && b==NULL)return true;
        if(a==NULL || b==NULL)return false;
        if(a->val!=b->val)return false;
        return isSame(a->left,b->right) && isSame(a->right,b->left);
    }
    /*TreeNode* invert(TreeNode* root){
        if(root==NULL)return NULL;
        swap(root->left,root->right);
        invert(root->left);
        invert(root->right);
        return root;
    }*/
};