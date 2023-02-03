class Solution {
public:
    int maxSubArray(vector<int>& nums) {
	int idx = 0, sz = nums.size(), sum = 0, mx = nums[idx];
	while (idx < sz) {
		sum += nums[idx++];
		mx = max(mx, sum);
		if (sum < 0)sum = 0;
	}
	return mx;
}
};