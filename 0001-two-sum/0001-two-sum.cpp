class Solution {
public:
   vector<int> twoSum(vector<int>& nums, int target) {
    map<int, int>mp; int idx1 = 0, idx2 = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (mp.find(target - nums[i]) != mp.end()) {
            idx1 = mp[target - nums[i]];
            idx2 = i;
            break;
        }
        else mp[nums[i]] = i;
    }
    return {idx1,idx2};
}
};