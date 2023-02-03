class Solution {
public:
   int maxSubarraySumCircular(vector<int>& nums) {
    // Calc Max subarray if in middel
    int sum = 0, mx1 = nums[0], n = nums.size(), sumR = 0, idx = 0, sumL = 0;
    while (idx < n) {
        sum += nums[idx];
        mx1 = max(mx1, sum);
        if (sum < 0)sum = 0;
        sumR += nums[idx];
        idx++;
    }
    // calc rigth and left
    idx = sum = 0;
    while (idx < n) {
        mx1 = max(mx1, sumR + sumL);
        sumR -= nums[idx];
        sum += nums[idx];
        sumL = max(sumL, sum);
        idx++;
    }

    return mx1;
}
};