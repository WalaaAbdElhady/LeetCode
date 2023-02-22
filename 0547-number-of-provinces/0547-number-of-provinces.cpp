class Solution {
private:
    bool vis[210];
    int cnt;
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        for(int i=0;i<isConnected.size();i++){
            if(!vis[i]){
                cnt++;
                dfs(i,isConnected);
            }
        }
        return cnt;
    }
    void dfs(int node, vector<vector<int>>& isConnected){
        vis[node] = true;
        for(int ch=0;ch<isConnected.size();ch++){
            if(isConnected[node][ch] && !vis[ch]){
                dfs(ch, isConnected);
            }
        }
    }
    
};