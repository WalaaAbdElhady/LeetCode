class Solution {
 int dp[101];
public:
    int rob(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return solve(0,nums);
    }
    int solve(int i,vector<int>& nums){
        if(i>=nums.size())return 0;
        if(dp[i]!=-1)return dp[i];
        return dp[i] = max(solve(i+1,nums),solve(i+2,nums)+nums[i]);
    }
};
