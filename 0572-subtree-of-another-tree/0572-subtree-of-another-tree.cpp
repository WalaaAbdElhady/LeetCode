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
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(root==NULL)return false;
        if(isSameTree(root,subRoot))return true;
        return isSubtree(root->left,subRoot)||isSubtree(root->right,subRoot);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {//p=[10,5,15] , q=[10,5,null,null,15]
    if (p == NULL && q==NULL)return true;
    if (p == NULL || q==NULL)return false;
    if(q->val != p->val)return false;
    return isSameTree(p->left , q->left) && isSameTree(p->right , q->right);
    }
};