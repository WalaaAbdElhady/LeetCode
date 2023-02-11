class Solution {
private:
	bool vis[401][2];//each node has two color
public:
	vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& redEdges, vector<vector<int>>& blueEdges) {
		vector<int>ans(n,-1);
		vector<vector<pair<int, int>>>adj(n, vector<pair<int, int>>(n));

		for (auto& node : redEdges)adj[node[0]].push_back({ node[1], 1 });
		for (auto& node : blueEdges)adj[node[0]].push_back({ node[1], 0 });
		//src = 0
		queue<vector<int>>q;
		q.push({ 0,0,1 });
		q.push({ 0,0,0 });
		while (!q.empty()) {
			auto p = q.front();
			q.pop();
			int from = p[0], to = p[1], color = p[2];
			vis[from][color] = true;
			for (auto& ch : adj[from]) {
				if (!vis[ch.first][ch.second] && ch.second != color) {
					if (ans[ch.first] == -1) {
						ans[ch.first] = to + 1;
					}
					q.push({ ch.first,to + 1,ch.second });
				}
			}
		}
        ans[0]=0;
		return ans;
	}

};