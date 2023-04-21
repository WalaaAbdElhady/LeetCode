class Solution {
    long long dp[101][101][101];
    const int MOD = 1e9 + 7;
public:
    int profitableSchemes(int n, int minProfit, vector<int>& group, vector<int>& profit) {
        memset(dp, -1, sizeof(dp));
        return solve(0, n, 0, minProfit, group, profit);
    }
    long long solve(int i, int n, int p, int minProfit, vector<int>& group, vector<int>& profit) {
        if (i == group.size()) {
            return (p >= minProfit);
        }
        long long& ret = dp[i][n][p];
        if (~ret)return ret;
        ret = solve(i + 1, n, p, minProfit, group, profit);
        if (n - group[i] >= 0)
            ret = ret + solve(i + 1, n - group[i],min(p + profit[i],minProfit), minProfit, group, profit) % MOD;
        return ret%MOD;
    }
};