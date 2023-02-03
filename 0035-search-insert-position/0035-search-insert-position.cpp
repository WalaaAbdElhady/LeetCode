class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
	int l = 0, r = nums.size() - 1, ans = -1;
	while (l <= r) {
		int mid = l + (r - l) / 2;
		if (nums[mid] == target)return mid;
		else if (nums[mid] > target)r = mid - 1, ans = mid;
		else l = mid + 1;
	}
	if (ans == -1)return nums.size();
	return ans;
}
};