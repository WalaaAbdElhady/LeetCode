class Solution {
    int dp[501];
public:
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        memset(dp,-1,sizeof(dp));
        return solve(0,arr.size(),k,arr);
    }
    int solve(int idx,int n,int k,vector<int>& arr){
        if(idx>=n)return 0;
        int&ret=dp[idx];
        if(~ret)return ret;
        ret=0;
        int mx=-1;
        for(int i=idx;i<n&&(i-idx+1)<=k;i++){
            mx=max(mx,arr[i]);
            ret=max(ret,mx*((i-idx+1))+solve(i+1,n,k,arr));
        }
        return ret;
    }
};