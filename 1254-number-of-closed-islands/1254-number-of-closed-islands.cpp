class Solution {
private:
  int dy[4] = { 1, -1, 0, 0};
  int dx[4] = { 0, 0, 1, -1}; 
public:
    int closedIsland(vector<vector<int>>& grid) {
        int ans=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==0){
                    if(dfs(i,j,grid))ans++;
                }
            }
        }
        return ans;
    }
    bool dfs(int i,int j,vector<vector<int>>& grid){
        if(i>=grid.size()|| i<0 || j>=grid[0].size()|| j<0)return false;
        if(grid[i][j]==1 || grid[i][j]==-1)return true;
        grid[i][j]=-1;
        bool ok = true;
        for(int k=0;k<4;k++){
            ok&=dfs(i+dx[k],j+dy[k],grid);
        }
        return ok;
    }
};