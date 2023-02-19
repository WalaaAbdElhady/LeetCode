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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
      return binarySearch(0,nums.size()-1,nums) ;
    }
    TreeNode* binarySearch(int l,int r,vector<int>& nums){
        if(l>r) return NULL;
        int mid= l+(r-l)/2;
        TreeNode* root = new TreeNode(nums[mid]);
        root->left=binarySearch(l,mid-1,nums);
        root->right=binarySearch(mid+1,r,nums);
        return root;
    }
};