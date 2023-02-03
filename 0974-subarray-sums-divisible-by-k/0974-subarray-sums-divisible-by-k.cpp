class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
    int frq[10001] = {};frq[0]++;
    int prefixSum = 0, ans = 0;
    for (int i : nums) {
        prefixSum = (prefixSum + i % k + k) % k;
        ans += frq[prefixSum]++;
    }
    return ans;
}
};