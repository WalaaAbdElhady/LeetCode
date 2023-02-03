class Solution {
public:
   vector<int> topKFrequent(vector<int>& nums, int k) {
    vector<vector<int>> BucketSort(nums.size() + 1);
    vector<int> ans;
    unordered_map<int, int> frq;
    for (int i = 0; i < nums.size(); i++)frq[nums[i]]++;
    for (auto it : frq) {
        BucketSort[it.second].push_back(it.first);
    }
    for (int i = nums.size(); i >= 0 && ans.size() < k; i--) {
        if (!BucketSort[i].empty()) {
            ans.insert(ans.end(), BucketSort[i].begin(), BucketSort[i].end());
        }
    }
    return ans;
}
};