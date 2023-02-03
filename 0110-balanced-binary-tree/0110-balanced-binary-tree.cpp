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
    bool isBalanced(TreeNode* root) {
        int height=0;
       if(dfs(root)==-1)return false;
       else return true;
    }
    int dfs(TreeNode* root){
      if(root==NULL){
          return 0;
      }
      int L=dfs(root->left),R=dfs(root->right);
      if(L==-1 || R==-1)return -1;
      if(abs(L-R)>1)return -1;
      return 1 + max(L,R);
    }
};