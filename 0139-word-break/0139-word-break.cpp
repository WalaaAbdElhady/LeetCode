class Solution {
    map<string,int>frq;
    int dp[301];
public:
    bool wordBreak(string s, vector<string>& wordDict) {
       memset(dp,-1,sizeof(dp));
       for(string w:wordDict)frq[w]++;
       return solve(0,s);
    }
    bool solve(int idx,string& s){
        if(idx==s.size())return true;
        int&ret=dp[idx];
        if(~ret)return ret;
        for(int j=idx;j<s.size();j++){
            string tmp= s.substr(idx,j-idx+1);
            if(frq.find(tmp)!=frq.end()){
               if(solve(j+1,s))return ret=true;
            }
        }
        return ret=false;
    }
};