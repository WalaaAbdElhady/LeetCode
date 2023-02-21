class Solution {
private:
    bool vis[3001];
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) { 
        dfs(0, rooms);
        for (int i = 0; i < rooms.size(); i++) {
            if (!vis[i])return false;
        }
        return true;
    }
    void dfs(int node, vector<vector<int>>& rooms) {
        vis[node] = true;
        for (auto& ch : rooms[node]) {
            if (!vis[ch]) {
                dfs(ch,rooms);
            }
        }
    }
};