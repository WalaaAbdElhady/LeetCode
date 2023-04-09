class Solution {
    int dp[200001];
public:
    int deleteAndEarn(vector<int>& nums) {
        vector<int>frq(200001,0);
        memset(dp,-1,sizeof(dp));
        for(int n:nums)frq[n]+=n;
        return solve(0,frq);
    }
    int solve(int i,vector<int>& nums){
        if(i>=nums.size())return 0;
        if(dp[i]!=-1)return dp[i];
        return dp[i] = max(solve(i+1,nums),solve(i+2,nums)+nums[i]);
    }
};