class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int cnt=0;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j]=='1') {
                    cnt++;
                    dfs(i, j, grid);
                }
            }
        }
        return cnt;
    }
    void dfs(int i, int j, vector<vector<char>>& grid) {
        if (i >= grid.size() || i < 0 || j >= grid[0].size() || j < 0 || grid[i][j]=='0')return;
        grid[i][j] = '0';
        dfs(i + 1, j, grid);
        dfs(i, j + 1, grid);
        dfs(i - 1, j, grid);
        dfs(i, j - 1, grid);
    }
};