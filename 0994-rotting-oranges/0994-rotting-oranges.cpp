class Solution {
private:
    queue<pair<int, int>> q;
    int fresh, ans = -1;
    int dx[4] = { 0,0,-1,1 };
    int dy[4] = { -1,1,0,0 };
public:
    int orangesRotting(vector<vector<int>>& grid) {
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[0].size(); j++) {
                if (grid[i][j] == 2) {
                    q.push({ i,j });
                }
                if (grid[i][j] == 1)fresh++;
            }
        }
       // cout<<fresh<<' '<<q.size();
        while (!q.empty()){
            int size = q.size();
            while (size--) {
                pair<int, int>parent = q.front();
                q.pop();
                for (int i = 0; i < 4; i++) {
                    int x = parent.first + dx[i];
                    int y = parent.second + dy[i];
                    if (x >= 0 && x < grid.size() && y >= 0 && y < grid[0].size() && grid[x][y] == 1) {
                        grid[x][y] = 2;
                        fresh--;
                        q.push({ x,y });
                        //cout<<fresh<<' ';
                    }
                }
            }
            ans++;
        }
       // cout<<ans;
        if (fresh > 0)return -1;
        if (ans == -1)return 0;
        return ans;
    }
};