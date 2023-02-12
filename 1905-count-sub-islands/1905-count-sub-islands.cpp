class Solution {
private:
    bool vis[501][501];
    int ans;
    bool ok = true;
public:
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        for(int i=0;i<grid1.size();i++){
            for(int j=0;j<grid1[0].size();j++){
                if(grid2[i][j]==1 && !vis[i][j]){
                    ok = true;
                    dfs(i,j,grid1,grid2);
                    ans += ok;
                }
            }
        }
        return ans;
    }
    void dfs (int i,int j,vector<vector<int>>& grid1, vector<vector<int>>& grid2){
        if(i>=grid1.size() || i<0 || j>=grid1[0].size() || j<0 || vis[i][j] || grid2[i][j]==0)return;
        if(grid2[i][j]!=grid1[i][j])ok=false;
        vis[i][j]=true;
        dfs(i+1,j,grid1,grid2);
        dfs(i-1,j,grid1,grid2);
        dfs(i,j+1,grid1,grid2);
        dfs(i,j-1,grid1,grid2);
    }
};