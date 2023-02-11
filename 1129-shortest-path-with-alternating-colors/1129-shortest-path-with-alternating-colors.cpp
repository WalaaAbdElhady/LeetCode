class Solution {
private:
	bool vis[401][2];//each node has two color
public:
	vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& redEdges, vector<vector<int>>& blueEdges) {
		vector<int>ans(n,-1);
        ans[0] = 0;
		vector<vector<pair<int, int>>>adj(n, vector<pair<int, int>>(n));

		for (auto& node : redEdges)adj[node[0]].push_back({ node[1], 1 });
		for (auto& node : blueEdges)adj[node[0]].push_back({ node[1], 0 });
		//src = 0
		queue<vector<int>>q;
		q.push({ 0,1 });
		q.push({ 0,0 });
        int dep = -1;
		while (!q.empty()) {
            int sz=q.size();
            dep++;
            while(sz--){
                auto p = q.front();
                q.pop();
                int node = p[0], color = p[1];
                vis[node][color] = true;
                for (auto& ch : adj[node]) {
                    if (!vis[ch.first][ch.second] && ch.second != color) {
                        if (ans[ch.first] == -1) {
                            ans[ch.first] = dep + 1;
                        }
                       q.push({ ch.first,ch.second});
                    }
                }
            }
		}
		return ans;
	}

};