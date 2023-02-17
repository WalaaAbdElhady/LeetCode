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
  int mn=INT_MAX;
  TreeNode* prev;
public:
    int minDiffInBST(TreeNode* root) {
        inOrder(root);
        return mn;
    }
    void inOrder(TreeNode* root){
        if(root==NULL)return;
        inOrder(root->left);
        //cout<<prev<<' '<<root->val<<'\n';
        if(prev != NULL)
        mn=min(mn,abs((prev->val)-(root->val)));
        prev=root;
        inOrder(root->right);
    }
};