/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    vector<int>v;
public:
    TreeNode* sortedListToBST(ListNode* head) {
        if(!head)return NULL;
        while(head){
            v.push_back(head->val);
            head=head->next;
        }
        return solve(0,v.size()-1);
    }
    TreeNode* solve(int l,int r){
        if(l>r)return NULL;
        int md=(l+r)/2;
        TreeNode* root=new TreeNode(v[md]);
        root->left=solve(l,md-1);
        root->right=solve(md+1,r);
        return root;
    }
};