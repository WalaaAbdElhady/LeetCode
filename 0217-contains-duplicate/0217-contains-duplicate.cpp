class Solution {
public:
   bool containsDuplicate(vector<int>& nums) {
    map<int, int>frq;
    for (int i = 0; i < nums.size() ; i++) {
        frq[nums[i]]++;
        if (frq[nums[i]] > 1)return true;
    }
    return false;
}
};