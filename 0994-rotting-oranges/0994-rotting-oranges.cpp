class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int minutes = 2;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == 2) {
                    dfs(grid, i, j, minutes);
                }
            }
        }
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == 1)return -1;
                else minutes =max(minutes, grid[i][j]);
            }
        }
        return minutes - 2;
    }
private:
    void dfs(vector<vector<int>>& grid, int i, int j,int minutes) {
        if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] == 0)return;
        if (grid[i][j] > 1 && grid[i][j] < minutes) return;
        grid[i][j] = minutes;
        dfs(grid, i - 1, j, minutes + 1);
        dfs(grid, i + 1, j, minutes + 1);
        dfs(grid, i, j - 1, minutes + 1);
        dfs(grid, i, j + 1, minutes + 1);
    }
};