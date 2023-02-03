class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
	if (nums.size() == 0)return 0;
	sort(nums.begin(), nums.end());
	int cnt = 1, mx = 0;
	for (int i = 1; i < nums.size(); i++) {
		if (nums[i] == nums[i - 1])continue;
		if (nums[i] == nums[i - 1] + 1)cnt++;
		else mx = max(cnt, mx), cnt = 1;
	}
	return max(mx, cnt);
}
};