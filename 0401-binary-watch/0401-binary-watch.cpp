class Solution {
    vector<int>HM={1,2,4,8,1,2,4,8,16,32};
    vector<string>ans;
    bool vis[11];
public:
    vector<string> readBinaryWatch(int turnedOn) {
        memset(vis,0,sizeof(vis));
        solve(0,turnedOn,0,0);
        return ans;
    }
    void solve(int idx,int on,int h,int m){
        if(h>11|| m>59)return;
        if(on==0){
            if(h<=11 && m<=59){
                string hours=to_string(h),minuts=to_string(m);
                if(m%10==m)minuts='0'+minuts;
                ans.push_back(hours+':'+minuts);
                return;
            }
        }
        for(int i=idx;i<10;i++){
            if(!vis[i]){
                vis[i]=true;
                if(i<4)solve(i+1,on-1,h+HM[i],m);
                else solve(i+1,on-1,h,m+HM[i]);
                vis[i]=false;
            }
        }
    }
};