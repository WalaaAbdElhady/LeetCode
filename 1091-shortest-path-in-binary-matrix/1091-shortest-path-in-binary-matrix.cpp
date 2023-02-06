class Solution {
private:
	int dy[8] = { 1, -1, 0, 0, -1, 1, 1, -1 };
	int dx[8] = { 0, 0, 1, -1, 1, -1, 1, -1 };
	bool vis[101][101];
	int ans;
public:
	int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        if(grid[0][0]==1)return -1;
		queue<pair<int, int>>q;
		q.push({ 0,0 });
		vis[0][0] = true;
		while (!q.empty()) {
			int sz = q.size();
            ans++;
			while (sz--) {
				pair<int, int>parent = q.front();
                if (parent.first == grid.size() - 1 && parent.second == grid[0].size() - 1)return ans;
				q.pop();
				for (int i = 0; i < 8; i++) {
					int x = parent.first + dx[i];
					int y = parent.second + dy[i];
					if (x >= 0 && x < grid.size() && y >= 0 && y < grid[0].size() && grid[x][y] == 0 && !vis[x][y]) {
						vis[x][y] = true;
						q.push({ x,y });
					}
				}
			}
		}
		return -1;
	}
};