class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        for(int i=0;i<grid[0].size();i++){
            dfs(0,i,grid);
            dfs(grid.size()-1,i,grid);
        }
        for(int i=0;i<grid.size();i++){
            dfs(i,0,grid);
            dfs(i,grid[0].size()-1,grid);
        }
        int cnt=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1)cnt++;
                //cout<<grid[i][j]<<' ';
            }//cout<<"\n";
        }
        return cnt;
    }
    void dfs(int i,int j,vector<vector<int>>& grid){
        if(i>=grid.size()|| i<0 || j<0 || j>=grid[0].size() || grid[i][j]!=1 )return;
        
        if(grid[i][j]==1)grid[i][j]=2;
        dfs(i+1,j,grid);
        dfs(i-1,j,grid);
        dfs(i,j+1,grid);
        dfs(i,j-1,grid);
    }
};