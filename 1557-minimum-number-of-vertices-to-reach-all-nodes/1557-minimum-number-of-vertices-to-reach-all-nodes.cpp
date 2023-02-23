class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<bool> vis(n);
        for(auto &i: edges){
            vis[i[1]] = true;
        }
        vector<int> ans;
        for(int i = 0; i < n; i++){
            if(!vis[i])ans.push_back(i);
        }
        return ans;
    }
};