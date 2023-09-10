class Solution {
    int MOD=1e9 + 7;
public:
    int countOrders(int n) {
        long long slots=n*2,ans=1;
        while(slots>0){
            long long valid=slots*(slots-1)/2;
            ans= ((ans%MOD)*valid)%MOD;
            slots-=2;
        }
        return ans% MOD;   
    }
};