class Solution {
public:
    int distributeCookies(vector<int>& cookies, int k) {
        vector<int>ans(k);
        return solve(0,cookies,ans);
    }
    int solve(int idx,vector<int>& cookies,vector<int>& ans){
        if(idx==cookies.size()){
            int mx=0;
            for(int n:ans){
                if(!n)return 1e9;
                mx=max(mx,n);
            }
            return mx;
        }
        int ret=1e9;
        for(int i=0;i<ans.size();i++){
            ans[i]+=cookies[idx];
            ret=min(ret,solve(idx+1,cookies,ans));
            ans[i]-=cookies[idx];
        }
        return ret;
    }
};