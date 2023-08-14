class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>>ans;
        for(int i=0;i<nums.size();i++){
            ans.push(nums[i]);
            if(ans.size()>k)ans.pop();
        }
        return ans.top();
    }
};