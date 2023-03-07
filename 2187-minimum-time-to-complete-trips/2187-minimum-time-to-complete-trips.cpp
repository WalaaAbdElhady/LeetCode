class Solution {
#define ll long long
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        ll l = 0, r = 1e14, ans = -1;
        while(l <= r){
            ll md = (l + r) / 2;
            if(valid(md,time,totalTrips))r = md - 1,ans = md;
            else l = md + 1;
        }
        return ans;
    }
    bool valid(ll t,vector<int>& time,int totalTrips){
        ll total = 0;
        for(int i = 0; i < time.size(); i++){
            total += (t / time[i]);
        }
        return total >= totalTrips;
    }
};