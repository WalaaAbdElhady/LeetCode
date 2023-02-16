class Solution {
private:
	int dy[4] = { 1, -1, 0, 0};
	int dx[4] = { 0, 0, 1, -1};
public:
	vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
		queue<pair<int, int>>q;
		for (int i = 0; i < mat.size(); i++) {
			for (int j = 0; j < mat[0].size(); j++) {
				if (mat[i][j] == 0)q.push({ i,j });
				else mat[i][j] = -1;
			}
		}
		while (!q.empty()) {
			int sz = q.size();
			while (sz--) {
				auto parent = q.front();
				q.pop();
				for (int k = 0; k < 4; k++) {
					int i = parent.first + dx[k];
					int j = parent.second + dy[k];
					if (i >= 0 && i < mat.size() && j >= 0 && j < mat[0].size() && mat[i][j] == -1) {
						q.push({ i,j });
						mat[i][j] = mat[parent.first][parent.second] + 1;
					}
				}
			}
		}
		return mat;
	}
};