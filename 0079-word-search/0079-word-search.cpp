class Solution {
public:
    bool solve(int i,int j,int n,int m,int idx,
    vector<vector<char>>& board, string word){
       if(i>=n || i<0 || j>=m || j<0 || word[idx]!=board[i][j])return false;
       if(idx==word.size()-1)return true;
        board[i][j]='*';
       if(solve(i+1,j,n,m,idx+1,board,word)||
        solve(i-1,j,n,m,idx+1,board,word) ||
        solve(i,j+1,n,m,idx+1,board,word) ||
        solve(i,j-1,n,m,idx+1,board,word))return true;
         board[i][j] = word[idx];
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size(),m=board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(board[i][j]==word[0]){
                   if(solve(i,j,n,m,0,board,word))return true;
                }
            }
        }
        return false;
    }
};