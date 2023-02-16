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
     vector<vector<int>>ans;
public:
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>path;
        preorder(root,targetSum,0,path);
        return ans;
    }
    void preorder(TreeNode* root, int target,int sum,vector<int>&path){
        if(root==NULL)return;
        sum+=root->val;
        path.push_back(root->val);
        if(sum==target && !root->left && !root->right ){
          ans.push_back(path);
        }
        preorder(root->left,target,sum,path);
        preorder(root->right,target,sum,path);
        path.pop_back();
    }
};