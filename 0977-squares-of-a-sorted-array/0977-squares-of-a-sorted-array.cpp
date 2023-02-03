class Solution {
public:
   vector<int> sortedSquares(vector<int>& nums) {
    int l = 0, r = nums.size()-1;
    vector<int>ans;
    while (l <= r) {
        if (nums[l] * nums[l] > nums[r] * nums[r]) {
            ans.push_back(nums[l] * nums[l]);
            l++;
        }
        else {
            ans.push_back(nums[r] * nums[r]);
            r--;
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}
};