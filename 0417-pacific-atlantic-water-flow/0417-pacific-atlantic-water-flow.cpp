class Solution {
public:
	vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
		int n = heights.size(),m = heights[0].size();
		vector<vector<bool>> pacific(n, vector<bool>(m));
		vector<vector<bool>> atlantic(n, vector<bool>(m));
		vector<vector<int>> ans;
		for (int i = 0; i < n; i++) {
			dfs(i, 0, heights, pacific, heights[i][0]);
			dfs(i, m - 1, heights, atlantic, heights[i][m-1]);
		}
		for (int j = 0; j < m; j++) {
			dfs(0, j, heights, pacific, heights[0][j]);
			dfs(n - 1, j, heights, atlantic, heights[n - 1][j]);
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (pacific[i][j] && atlantic[i][j])ans.push_back({ i,j });
			}
		}
		return ans;
	}
	void dfs(int i, int j, vector<vector<int>>& heights, vector<vector<bool>>& vis,int prev) {
		if (i < 0 || i >= heights.size() || j < 0 || j >= heights[0].size() 
            || vis[i][j] || heights[i][j] < prev)return;
		vis[i][j] = true;
		dfs(i + 1, j, heights, vis, heights[i][j]);
		dfs(i - 1, j, heights, vis, heights[i][j]);
		dfs(i, j + 1, heights, vis, heights[i][j]);
		dfs(i, j - 1, heights, vis, heights[i][j]);
	}
};