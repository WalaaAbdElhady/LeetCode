class Solution {
public:
	vector<int> productExceptSelf(vector<int>& nums) {
		vector<int> ans(nums.size());
		int pre = 1;
		for (int i = 0; i < nums.size(); i++) {
			ans[i] = pre;
			pre *= nums[i];
		}
		int pos = 1;
		for (int i = nums.size() - 1; i >= 0; i--) {
			ans[i] *= pos;
			pos *= nums[i];
		}
		return ans;
	}
};