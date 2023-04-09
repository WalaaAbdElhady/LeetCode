class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n==1)return nums[0];
        vector<int>dp1(n+1,-1),dp2(n+1,-1);
        return max(solve(0,nums,n-2,dp1),solve(1,nums,n-1,dp2));
    }
     int solve(int i,vector<int>& nums,int sz,vector<int>& dp){
        if(i>sz)return 0;
        if(dp[i]!=-1)return dp[i];
        return dp[i] = max(solve(i+1,nums,sz,dp),solve(i+2,nums,sz,dp)+nums[i]);
    }
};