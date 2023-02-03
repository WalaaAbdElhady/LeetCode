class Solution {
public:
    
vector<vector<int>> findSubsequences(vector<int>& nums) {
    vector<vector<int>>ans;
    map<vector<int>, int>mp;
    int n = nums.size();
    for (int i = 1; i < (1 << n); i++) {
        vector<int>tmp;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j))tmp.push_back(nums[j]);
        }
        if (tmp.size() >= 2 && !mp[tmp])
            if (is_sorted(tmp.begin(), tmp.end())) {
                ans.push_back(tmp);
                mp[tmp]++;
            }
    }
    return ans;
}
};