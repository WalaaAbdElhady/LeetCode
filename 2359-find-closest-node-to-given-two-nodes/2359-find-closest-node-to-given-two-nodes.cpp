class Solution {
public:
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
	int n = edges.size();
	vector<int>dis1 = BFS(node1, n, edges);
	vector<int>dis2 = BFS(node2, n, edges);
	int ans = -1, mx = INT_MAX;
	for (int i = 0; i < n; i++) {
		if (mx > max(dis1[i], dis2[i])) {
			mx = max(dis1[i], dis2[i]);
			ans = i;
		}
	}
	return ans;
}
vector<int> BFS(int root, int n, vector<int>& edges) {
	queue<int>q;
	vector<int>dis(n, INT_MAX);
	q.push(root);
	dis[root] = 0;
	while (!q.empty()) {
		int p = q.front();
		q.pop();
		if (edges[p] != -1 && dis[edges[p]] == INT_MAX) {
			q.push(edges[p]);
			dis[edges[p]] = dis[p] + 1;
		}
	}
	return dis;
}
};