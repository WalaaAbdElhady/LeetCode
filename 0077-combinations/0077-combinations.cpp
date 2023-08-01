class Solution {
    vector<vector<int>>ans;
    vector<int>tmp;
public:
    vector<vector<int>> combine(int n, int k) {
        solve(1,n,k);
        return ans;
    }
    void solve(int i,int n,int k){
        if(tmp.size()==k){
         ans.push_back(tmp);
         return;
        }
        for(int j=i;j<=n;j++){
            tmp.push_back(j);
            solve(j+1,n,k);
            tmp.pop_back();
        }
    }
};