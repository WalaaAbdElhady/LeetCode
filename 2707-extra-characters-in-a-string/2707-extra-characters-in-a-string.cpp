class Solution {
public:
    int minExtraChar(string s, vector<string>& dictionary) {
    map<string, int>frq;
    int n = s.size();
    vector<int>dp(n + 1);
    for (auto& it : dictionary)frq[it]++;
    dp[0] = 0;
    for (int i = 1; i <= n; i++) {
        dp[i] = dp[i - 1] + 1;
        for (int j = i; j >= 1; j--) {
            string tmp = s.substr(j - 1, i - j + 1);
            if (frq[tmp] > 0)dp[i] = min(dp[i], dp[j - 1]);
        }
    }
    return dp[n];
}
};