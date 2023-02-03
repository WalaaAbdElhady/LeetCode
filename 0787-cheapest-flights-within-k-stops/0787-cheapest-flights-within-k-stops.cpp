class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<vector<pair<int, int>>> adj(n);
        for (auto& it : flights)
            adj[it[0]].push_back({ it[1], it[2] });

        vector<int> ans(n, (int)(1e9));
        queue<vector<int>> q;
        q.push({ src, 0, 0 });

        while (!q.empty()) {
            auto flight = q.front();
            q.pop();

            int node = flight[0];
            int nodeCost = flight[1];
            int stops = flight[2];

            if (stops > k) continue;

            for (auto& [child, childCost] : adj[node]) {
                if (childCost + nodeCost < ans[child]) {
                    ans[child] = childCost + nodeCost;
                    q.push({ child, ans[child], stops + 1 });
                }
            }
        }

        return ans[dst] == (int)(1e9) ? -1 : ans[dst];
    }
};