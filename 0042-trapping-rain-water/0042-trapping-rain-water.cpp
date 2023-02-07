class Solution {
public:
   int trap(vector<int>& height) {
    int l = 0, r = height.size() - 1, maxL = height[l];
    int maxR = height[r], ans = 0;
    while (l < r) {
        if (height[l] <= height[r]) {
            l++;
            maxL = max(maxL, height[l]);
            ans += maxL - height[l];
        }
        else {
            r--;
            maxR = max(maxR, height[r]);
            ans += maxR - height[r];
        }
    }
    return ans;
}
};