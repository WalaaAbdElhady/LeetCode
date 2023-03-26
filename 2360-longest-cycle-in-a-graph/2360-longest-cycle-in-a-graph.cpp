class Solution {
private:
    vector<int> vis, depth, edges;
    int n, ans;
public:
    int longestCycle(vector<int>& edges) {
        this -> edges = edges;
        ans = -1;
        n =  edges.size();
        vis.resize(n, 0);
        depth.resize(n, 0);
        for(int i = 0; i < n; i++)
            if(!vis[i]){
                dfs(i, 0);
            }
        return ans;
    }
    void dfs(int node,int dep){
        vis[node] = true;
        depth[node] = dep;
        //next node
        int nextNode = edges[node];
        if(nextNode != -1){
            // visited but not finished => cycle
            if(vis[nextNode] == 1){
                ans = max(ans, depth[node] - depth[nextNode] + 1);
            }
            else if(!vis[nextNode]){
                dfs(nextNode, dep + 1);
            }
        }
        vis[node] = 2;//finished
    }
};