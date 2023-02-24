class Solution {
public:
  void rotate(vector<int>& nums, int k) {
    int n = nums.size(), l = 0, r = n - 1;
    k %= n;
    //reverse all vector
    while (l < r) {
        swap(nums[l], nums[r]);
        r--, l++;
    }
    // reverse from begin until index k
    l = 0, r = k - 1;
    while (l < r) {
        swap(nums[l], nums[r]);
        r--, l++;
    }
    // swap from index k to the end
    l = k, r = n - 1;
    while (l < r) {
        swap(nums[l], nums[r]);
        r--, l++;
    }
}
};