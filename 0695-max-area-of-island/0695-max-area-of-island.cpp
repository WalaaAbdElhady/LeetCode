class Solution {
private:
bool vis[51][51];
int ans;
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(!vis[i][j] && grid[i][j]==1){
                    int cnt=0;
                    dfs(i,j,grid,cnt);
                    ans=max(ans,cnt);
                }
            }
        }
        return ans;
    }
    
    void dfs(int i, int j, vector<vector<int>>& grid, int& cnt) {
        if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || vis[i][j] || grid[i][j]==0)return;
        vis[i][j] = true;
        cnt++;
        dfs(i + 1, j, grid, cnt);
        dfs(i, j + 1, grid, cnt);
        dfs(i - 1, j, grid, cnt);
        dfs(i, j - 1, grid, cnt);
    }
};