class Solution {
private:
    int dp[10001];
public:
    int coinChange(vector<int>& coins, int amount) {
        memset(dp, -1, sizeof(dp));
        return solve(coins, amount) == INT_MAX ? -1 : solve(coins, amount);
    }
    int solve(vector<int>& coins, int amount) {
        if (amount == 0)return 0;
        if (amount < 0)return INT_MAX;
        if (dp[amount] != -1)return dp[amount];
        int ans = INT_MAX;
        for (int i = 0; i < coins.size(); i++) {
            int temp = solve(coins, amount - coins[i]);
            if (temp != INT_MAX && temp + 1 < ans) {
                ans = temp + 1;
            }
        }
        return dp[amount] = ans;
    }
};