class Solution {
private:
    bool vis[101][101];
    int dy[4] = { 1, -1, 0, 0 };
    int dx[4] = { 0, 0, 1, -1 };
public:
    int maxDistance(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        queue<pair<int, int>>q;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    q.push({ i,j });
                }
            }
        }
        if(q.size() == n * m)return -1;
        int mx = 0;
        while (!q.empty()) {
            int sz = q.size();
            while (sz--) {
                pair<int, int>p = q.front();
                q.pop();
                int x = p.first, y = p.second;
                for (int i = 0; i < 4; i++) {
                    int nexti = x + dx[i];
                    int nextj = y + dy[i];
                    if (nexti < n && nexti >= 0 && nextj < m && nextj >= 0 && grid[nexti][nextj] == 0 && !vis[nexti][nextj]) {
                        q.push({ nexti,nextj });
                        vis[nexti][nextj] = true;
                    }
                }
            }mx++;
        }
        return mx-1;
    }
};