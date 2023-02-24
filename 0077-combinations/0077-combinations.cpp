class Solution {
private:
    vector<vector<int>>ans;
    vector<int>v;
public:
    void solve(int i, int n, int k) {
        if (v.size() == k) {
            ans.push_back(v);
            return;
        }
        for (int j = i; j <= n; j++) {
            v.push_back(j);
            solve(j + 1, n, k);
            v.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        solve(1, n, k);
        return ans;
    }
};