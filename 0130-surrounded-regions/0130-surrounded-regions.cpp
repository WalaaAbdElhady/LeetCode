class Solution {
public:
    void solve(vector<vector<char>>& board) {
    for (int j = 0; j < board[0].size(); j++) {
        dfs(board, 0, j);//top
        dfs(board, board.size() - 1, j);//bottom
    }
    for (int i = 0; i < board.size(); i++) {
        dfs(board, i, 0);//left
        dfs(board, i, board[0].size() - 1);//right
    }
    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board[0].size(); j++) {
            if (board[i][j] == 'O')board[i][j] = 'X';
            if (board[i][j] == 'W') board[i][j] = 'O';
        }
    }
}
private:
   void dfs(vector<vector<char>>& board, int i, int j) {
    if (i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || board[i][j] != 'O') {
        return;
    }
    board[i][j] = 'W';
    dfs(board, i - 1, j);
    dfs(board, i + 1, j);
    dfs(board, i, j - 1);
    dfs(board, i, j + 1);
}
};