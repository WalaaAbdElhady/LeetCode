class Solution {
private:
    vector<vector<int>>ans;
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<int>tmp;
        dfs(graph,tmp,0);
        return ans;
    }
    void dfs(vector<vector<int>>& graph,vector<int>tmp,int src){
        tmp.push_back(src);
        if(src==graph.size()-1){
            ans.push_back(tmp);
            return;
        }
        for(auto&ch:graph[src]){
            dfs(graph,tmp,ch);
        }
        tmp.pop_back();
    }
};