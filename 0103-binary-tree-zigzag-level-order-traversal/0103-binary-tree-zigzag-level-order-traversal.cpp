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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(!root)return ans;
        int level = 0;
        queue<TreeNode*>q;
        q.push(root);
        while (!q.empty()) {
            int sz = q.size();
            vector<int>tmp;
            while (sz--) {
                TreeNode* parent = q.front();
                q.pop();
                tmp.push_back(parent->val);
                if (parent->left)q.push(parent->left);
                if (parent->right)q.push(parent->right);
            }
            if (level & 1)reverse(tmp.begin(), tmp.end());
            ans.push_back(tmp);
            level ++;
        }
        return ans;
    }

};