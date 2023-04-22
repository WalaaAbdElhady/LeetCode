class Solution {
    int dp[101][101];
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        memset(dp,-1,sizeof(dp));
        return solve(0,0,obstacleGrid);
    }
    int solve(int i,int j,vector<vector<int>>& a){
        if(i>=a.size() || j>=a[0].size() || a[i][j]==1)return 0;
        if(i==a.size()-1 && j==a[0].size()-1)return 1;
        int&ret=dp[i][j];
        if(~ret)return ret;
        return ret=solve(i+1,j,a)+solve(i,j+1,a);
    }
};