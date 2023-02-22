class Solution {
private:
   int dy[4] = { 1, -1, 0, 0};
   int dx[4] = { 0, 0, 1, -1};
   bool vis[101][101];
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
        queue<pair<int,int>>q;
        q.push({entrance[0],entrance[1]});
        int dis=0;
        while(!q.empty()){
            int sz=q.size();
            while(sz--){
                auto parent=q.front();
                q.pop();
                if((parent.first!=entrance[0] || parent.second!=entrance[1]) &&
                (parent.first==0 || parent.first==maze.size()-1 
                || parent.second==0 || parent.second==maze[0].size()-1))return dis;
                for(int x=0;x<4;x++){
                    int i = parent.first +dx[x];
                    int j = parent.second+dy[x];
                    if(i>=0 && i<maze.size()&& j>=0&&j<maze[0].size()&& maze[i][j]=='.' && !vis[i][j]){
                        q.push({i,j});
                        vis[i][j]=true;
                    } 
                }
            }dis++;
        }
        return -1;
    }
};