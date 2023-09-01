class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans;
        for(int i=0;i<=n;i++){
            ans.push_back(cntOnes(i));
        }
        return ans;
    }
    int cntOnes(int n){
        int cnt=0;
        while(n){
            cnt+=(n&1);
            n>>=1;
        }
        return cnt;
    }
};