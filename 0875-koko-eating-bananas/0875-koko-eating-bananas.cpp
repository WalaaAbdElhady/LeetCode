class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1, r = 1e9, ans = -1;
        while(l <= r){
            int md = l + (r - l) / 2;
            if(valid(md, piles, h))ans = md, r = md - 1;
            else l = md + 1;
        }
        return ans;
    }
    bool valid(int k, vector<int>& piles, int h){
        long long curHour = 0;
        for(int i = 0; i < piles.size(); i++){
            curHour += piles[i] / k;
            if(piles[i] % k)curHour ++;
        }
        return curHour <= h;
    }
    
};