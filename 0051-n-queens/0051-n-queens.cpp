class Solution {
private:
vector<vector<string>>ans;
vector<string>v;
public:
    bool valid(int r,int c,int n){
        for (int i = 0; i < c; i++)if (v[r][i] == 'Q')return false;
        for(int i = r, j = c; i >= 0 && j >= 0; i--, j--)if (v[i][j] == 'Q')return false;
        for (int i = r, j = c; i < n && j >= 0; i++, j--)if (v[i][j] == 'Q')return false;
        return true;
    }
    void solve(int c,int n){
      if (c == n) { ans.push_back(v); return; }
        for (int i = 0; i < n; i++) {
            if (valid(i, c, n)) {
                v[i][c] = 'Q';
                solve(c + 1, n);
                v[i][c] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        v = vector<string>(n);
        for(int i=0;i<n;i++)v[i]=string(n, '.');
        solve(0,n);
        return ans;
    }
};