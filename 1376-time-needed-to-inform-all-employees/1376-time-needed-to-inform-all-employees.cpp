class Solution {
public:
	int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
		vector<vector<int>> adj(n);
		for (int i = 0; i < n; i++) {
			if (manager[i] != -1)
				adj[manager[i]].push_back(i);
		}int ans = -1;
		queue<pair<int, int>>q;
		q.push({ headID,0 });
		while (!q.empty()) {
			int sz = q.size();
			while (sz--) {
				auto parent = q.front();
				q.pop();
				ans = max(ans, parent.second);
				for (auto& ch : adj[parent.first]) {
					q.push({ ch,parent.second + informTime[parent.first] });
				}
			}
		}
		return ans;
	}
};