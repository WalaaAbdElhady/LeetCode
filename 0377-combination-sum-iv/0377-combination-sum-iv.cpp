class Solution {
 long long dp[201][1001];
public:
    int combinationSum4(vector<int>& nums, int target) {
        memset(dp,-1,sizeof(dp));
        return solve(0,0,target,nums);
    }
    int solve(int idx,long long sum, int target, vector<int>& v){
        if(sum==target)return 1;
        if(idx==v.size()){
            if(sum==target)return 1;
           return 0;
        }
        long long&ret=dp[idx][sum];
        if(~ret)return ret;
        ret=0;
        for(int i=0;i<v.size();i++){
        if(sum+v[i]<=target)ret+=solve(i,sum+v[i],target,v);
        }
        return ret;
    }
};