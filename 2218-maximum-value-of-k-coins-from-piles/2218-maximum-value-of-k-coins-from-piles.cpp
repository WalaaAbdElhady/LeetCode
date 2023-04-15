
class Solution {
    vector<vector<int>> piles;
    int dp[1001][2001];
public:
    int maxValueOfCoins(vector<vector<int>>& piles, int k) {
        this->piles = piles;
        memset(dp, -1, sizeof(dp));
        return solve(0, k);
    }
    int solve(int idx, int k){
        if(!k) return 0;
        if(idx == piles.size()) return 0;
        int& ret = dp[idx][k];
        if (~ret)return ret;
        int sum = 0, ans = 0;
        ans = solve(idx + 1, k);
        for(int i = 0; i < min(k, (int)piles[idx].size()); i++){
            sum += piles[idx][i];
            ans = max(ans, sum + solve(idx + 1, k - i - 1));
        }
        return ret = ans;
    }   
};
