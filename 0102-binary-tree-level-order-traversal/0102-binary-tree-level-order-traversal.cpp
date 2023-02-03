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
        vector<vector<int>>ans;
    public:
        vector<vector<int>> levelOrder(TreeNode* root) {
            if (root == NULL)return ans;
            queue<TreeNode*>q;
            q.push(root);
            while (!q.empty()) {
                vector<int>tmp;
                int cnt = q.size();
                for (int i = 0; i < cnt; i++) {
                    TreeNode* cur = q.front();
                    q.pop();
                    tmp.push_back(cur->val);
                    if (cur->left != NULL)q.push(cur->left);
                    if (cur->right != NULL)q.push(cur->right);
                }
                ans.push_back(tmp);
            }
            return ans;
        }
    };