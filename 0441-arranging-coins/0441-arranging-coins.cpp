class Solution {
public:
    int arrangeCoins(int n) {
        long long l=1,r=n,md,ans=0;
        while(l<=r){
            md=l+(r-l)/2;
            long long coins =(md*(md+1))/2;
            if(n>=coins)l=md+1,ans=md;
            else r=md-1;
        }
        return ans;
    }
};