class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {//O(n^2)
    vector<vector<int>>ans;
    int n = nums.size();
    if (n < 3) {
        return ans;
    }
    sort(nums.begin(), nums.end());// -1 -1 0 1 2 4
    for (int k = 0; k < n - 2; k++) {
        if (nums[k] > 0)break;
        if (k > 0 && nums[k] == nums[k - 1])continue;// if number i take exist more than once
        int l = k + 1, r = n - 1;
        while (l < r) {
            if (nums[k] + nums[l] + nums[r] == 0) {
                ans.push_back({ nums[k],nums[l],nums[r] });
                while (l < r && nums[l] == nums[l + 1]) {// if number i take exist more than once
                    l++;
                }l++;
                while (l < r && nums[r] == nums[r - 1]) {// if number i take exist more than once
                    r--;
                }r--;
            }
            else if (nums[k] + nums[l] + nums[r] > 0) {
                r--;
            }
            else l++;
        }
    }
    return ans;
}
};