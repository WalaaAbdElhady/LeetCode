class Solution {
    int dp[301][5001];
public:
    int change(int amount, vector<int>& coins) {
        memset(dp,-1,sizeof dp);
        return solve(0,amount,coins);
    }
    int solve(int idx,int amount,vector<int>& coins){
        if(idx==coins.size())return amount==0;
        int&ret=dp[idx][amount];
        if(~ret)return ret;
        ret=solve(idx+1,amount,coins);
        if(coins[idx]<=amount)ret+=solve(idx,amount-coins[idx],coins);
        return ret;
    }
};