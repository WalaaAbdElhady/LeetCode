class Solution {
public: 
vector<vector<int>>ans;
vector<int>v;
void solve(int i, vector<int>& nums) {
	ans.push_back(v);
	for (int j = i; j < nums.size(); j++) {
        if(j>i && nums[j]==nums[j-1])continue;
		v.push_back(nums[j]);
		solve(j + 1, nums);
		v.pop_back();
	}
}
vector<vector<int>>subsetsWithDup(vector<int>& nums) {
    sort(nums.begin(),nums.end());
	solve(0,nums);
		return ans;
}
};