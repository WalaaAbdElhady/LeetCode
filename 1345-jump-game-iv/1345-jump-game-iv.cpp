class Solution {
public:
    int minJumps(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int, vector<int>> adj;
        for(int i = 0; i < n; i++){
            adj[arr[i]].push_back(i);
        }
        vector<bool> vis(n);
        vis[0] = true;
        queue<int> q;
        q.push(0);
        int dis = 0;
        while(!q.empty()){
            int sz = q.size();
            while(sz--){
                int parent = q.front();
                q.pop();
                if(parent == n - 1)return dis;
                vector<int>&tmp = adj[arr[parent]];
                tmp.push_back(parent - 1);
                tmp.push_back(parent + 1);
                for(auto& ch : tmp){
                    if(ch >= 0 && ch < n && !vis[ch]){
                        vis[ch] = true;
                        q.push(ch);
                    }
                }
                tmp.clear();
            } dis++;
        }
        return -1;
    }
};