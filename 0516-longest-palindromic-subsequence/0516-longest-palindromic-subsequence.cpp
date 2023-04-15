class Solution {
    int dp[1001][1001];
public:
    int longestPalindromeSubseq(string s) {
        memset(dp,-1,sizeof(dp));
        return solve(0,s.size()-1,s);
    }
    int solve(int i,int j,string& s){
        if(i>j)return 0;
        if(i==j)return 1;
        int &ret=dp[i][j];
        if(~ret)return ret;
        if(s[i]==s[j])return ret=solve(i+1,j-1,s)+2;
        return ret=max(solve(i+1,j,s),solve(i,j-1,s));
    }
};