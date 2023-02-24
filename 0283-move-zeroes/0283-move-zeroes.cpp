class Solution {
public:
    void moveZeroes(vector<int>& nums) {//in-place(modify array itself)
    int l = 0, r = 0, n = nums.size();
    while (r < n) {
        if (nums[r]) {
            swap(nums[r], nums[l]);
            l++;
        }
        r++;
    }
}
};