class Solution {
int dp[101][101];
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        memset(dp,-1,sizeof(dp));
        return solve(0,0,obstacleGrid);
    }
    int solve(int i,int j,vector<vector<int>>&v){
        if(i>=v.size()||i<0 || j>=v[0].size() || j<0 || v[i][j])return 0;
        if(i==v.size()-1 && j==v[0].size()-1)return 1;
        int&ret=dp[i][j];
        if(~ret)return ret;
        return ret=solve(i+1,j,v)+solve(i,j+1,v);
    }
};