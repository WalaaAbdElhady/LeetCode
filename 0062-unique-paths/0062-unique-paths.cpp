class Solution {
    int dp[101][101];
public:
    int uniquePaths(int m, int n) {
        memset(dp,-1,sizeof(dp));
        return solve(0,0,n,m);
    }
    int solve(int i,int j,int n,int m){
        if(i<0 || j<0 || i>=n || j>=m)return 0;
        if(i==n-1 && j==m-1)return 1;
        int&ret=dp[i][j];
        if(~ret)return ret;
        return ret=solve(i+1,j,n,m)+solve(i,j+1,n,m);
    }
};