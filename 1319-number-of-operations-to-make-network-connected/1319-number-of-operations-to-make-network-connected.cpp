class Solution {
private:
    vector<int> vis;
    vector<vector<int>> adj;
    int cnt;
public:
    int makeConnected(int n, vector<vector<int>>& connections) {
        vis = vector<int>(n);
        adj = vector<vector<int>>(n);
        if (connections.size() < n - 1)return -1;
        for (auto v : connections) {
            adj[v[0]].push_back(v[1]);
            adj[v[1]].push_back(v[0]);
        }
        for (int i = 0; i < n; i++)
            if (!vis[i]) {
                dfs(i);
                cnt++;
            }
        return cnt - 1;
    }
    void dfs(int node) {
        vis[node] = true;
        for (int ch : adj[node]) {
            if (!vis[ch])
                dfs(ch);
        }
    }
};