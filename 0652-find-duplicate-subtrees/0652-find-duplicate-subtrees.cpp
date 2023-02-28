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
    unordered_map<string,int>frq;
    vector<TreeNode*>ans; 
public:
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        inorder(root);
        return ans;
    }
    string inorder(TreeNode* root){
        if(!root)return "";
        string tmp="["+inorder(root->left)+"]";
        tmp+=to_string(root->val);
        tmp+="["+inorder(root->right)+"]";
        cout<<tmp<<"\n";
        if(++frq[tmp]==2)ans.push_back(root);
        return tmp;
    }
};