class Solution {
    const int MOD = 1e9+7;
    long long dp[1000001];
public:
    int numberOfArrays(string s, int k) {
        memset(dp,-1,sizeof(dp));
        return solve(0,s,k);
    }
    long long solve(int i,string& s, int k){
        if(i == s.size())return 1;
        if(s[i] == '0')return 0;
        long long& ret = dp[i];
        if(~ret)return ret;
        long long digit = 0;
        ret = 0;
        for(int j = i; j < s.size(); j++){
             digit = digit * 10 + s[j] - '0';
             if(digit > k)break;
             ret = ret + solve(j + 1, s, k) % MOD;
        }
        return ret % MOD;
    }
};