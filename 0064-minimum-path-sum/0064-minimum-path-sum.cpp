class Solution {
    int n, m;
    int dp[201][201];
public:
    int minPathSum(vector<vector<int>>& grid) {
        n = grid.size(), m = grid[0].size();
        memset(dp,-1,sizeof(dp));
        return solve(0,0,grid);
    }
    int solve(int i,int j,vector<vector<int>>& grid){
    if(i >= n || i < 0 || j >= m || j < 0 )return 1e9;
    if(i==n-1 && j==m-1)return grid[n-1][m-1];
    if(dp[i][j]!=-1)return dp[i][j];
    return dp[i][j]=min(solve(i,j+1,grid)+grid[i][j],solve(i+1,j,grid)+grid[i][j]);
    }
};