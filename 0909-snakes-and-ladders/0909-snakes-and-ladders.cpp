class Solution {
public:
int snakesAndLadders(vector<vector<int>>& board) {
	int n = board.size(); bool ok = true;
	vector<int>idxs(n * n + 1);
	int idx = 1;
	for (int i = n - 1; i >= 0; i--) {
		if (ok) {
			for (int j = 0; j < board[i].size(); j++) {
				idxs[idx++] = board[i][j];
			}ok = !ok;
		}
		else {
			for (int j = board[i].size() - 1; j >= 0; j--) {
				idxs[idx++] = board[i][j];
			}ok = !ok;
		}
	}
	vector<int>vis(n * n + 1, -1);
	queue<int>q;
	q.push(1);
	vis[1] = 0;
	while (!q.empty()) {
		int parent = q.front();
		if (parent == n * n)return vis[parent];
		q.pop();
		for (int i = 1; i <= 6; i++) {
			int ch = parent + i;
			if (ch <= n * n) {
				if (idxs[ch] != -1)ch = idxs[ch];// 2 => 15
				if (vis[ch] == -1) {
					q.push(ch);
					vis[ch] = vis[parent] + 1;
				}
			}
		}
	}
	return -1;
}
};