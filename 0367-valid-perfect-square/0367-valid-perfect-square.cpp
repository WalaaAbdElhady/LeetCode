class Solution {
public:
    bool isPerfectSquare(int n) {
        long long l=1,r=n,md;
        while(l<=r){
            md=(l+r)/2;
            long long sqr=md*md;
            if(sqr==n)return true;
            else if(n>sqr)l=md+1;
            else r=md-1;
        }
        return false;
    }
};