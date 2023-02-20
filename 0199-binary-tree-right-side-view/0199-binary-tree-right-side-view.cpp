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
    vector<int>ans;
public:
    vector<int> rightSideView(TreeNode* root) {
       if(!root)return ans;
       queue<TreeNode*>q;
       q.push(root);
       while(!q.empty()){
           int sz=q.size(),val = INT_MIN;
           while(sz--){
               auto parent = q.front();
               q.pop();
               if(val == INT_MIN)val = parent->val;
               if(parent->right!=NULL)q.push(parent->right);
               if(parent->left!=NULL)q.push(parent->left);
           }
           ans.push_back(val);
       }
     return ans;
    }
};