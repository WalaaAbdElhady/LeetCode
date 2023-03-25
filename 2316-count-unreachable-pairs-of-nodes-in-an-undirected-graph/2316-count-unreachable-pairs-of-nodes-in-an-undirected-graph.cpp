class Solution {
private:
    vector<int> vis;
    vector<vector<int>> adj;
    int cnt = 1;
public:
    long long countPairs(int n, vector<vector<int>>& edges) {
        vis = vector<int>(n);
        adj = vector<vector<int>>(n);
        for (auto v : edges) {
            adj[v[0]].push_back(v[1]);
            adj[v[1]].push_back(v[0]);
        }
        long long ans = 0,tmp = n; 
        for (int i = 0; i < n; i++){
            if (!vis[i]) {
                dfs(i);
                ans+=cnt*(tmp-cnt);
                tmp-=cnt;
                //cout<<cnt<<' ';
                cnt = 1;
            }
        }
        return ans;
    }
    void dfs(int node){
        vis[node] = true;
        for(auto&ch:adj[node]){
            if(!vis[ch]){
                dfs(ch);
                cnt++;
            }
        }
    }
};