class Solution {
private:
vector<vector<int>>ans;
vector<int>v;
public:
void solve(int i, int sum, vector<int>& candidates, int target) {
	if (sum > target) {
		return;
	}
	if (sum == target) {
		ans.push_back(v);
		return;
	}
	for (int j = i; j < candidates.size(); j++) {
		//if (j > i && candidates[j] == candidates[j - 1])continue;
		v.push_back(candidates[j]);
		solve(j, sum + candidates[j], candidates, target);
		v.pop_back();
	}
}
vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
	//sort(candidates.begin(), candidates.end());
	solve(0, 0, candidates, target);
	return ans;
}

};