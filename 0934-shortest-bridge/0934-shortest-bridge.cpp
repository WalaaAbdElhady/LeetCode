class Solution {
private:
    bool vis[101][101];
    int dy[4] = { 1, -1, 0, 0};
    int dx[4] = { 0, 0, 1, -1};
    queue<pair<int, int>>q;
public:
    int shortestBridge(vector<vector<int>>& grid) {
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j]) {
                    dfs(i, j, grid);
                    return bfs(grid);
                }
            }
        }
        return -1;
    }
    void dfs(int i, int j, vector<vector<int>>& grid) {
        if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || vis[i][j] || grid[i][j] == 0)return;
        q.push({ i,j });
        vis[i][j] = true;
        dfs(i + 1, j, grid);
        dfs(i - 1, j, grid);
        dfs(i, j + 1, grid);
        dfs(i, j - 1, grid);
    }
    int bfs(vector<vector<int>>& grid) {
        int dis = 0;
        while (!q.empty()) {
            int sz = q.size();
            while (sz--) {
                auto parent = q.front();
                q.pop();
                for (int x = 0; x < 4; x++) {
                    int i = parent.first + dx[x];
                    int j = parent.second + dy[x];
                    if (i >= 0 && i < grid.size() && j >= 0 && j < grid[0].size() && !vis[i][j]) {
                        if (grid[i][j] == 1)return dis;
                        q.push({ i,j });
                        vis[i][j] = true;
                    }
                }
            }dis++;
        }
        return -1;
    }
};