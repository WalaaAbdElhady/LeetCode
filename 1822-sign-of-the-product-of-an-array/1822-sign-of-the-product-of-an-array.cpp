class Solution {
public:
    int arraySign(vector<int>& nums) {
        int zero=0,neg=0;
        for(int n:nums){
            if(n<0)neg++;
            if(n==0)zero++;
        }
        if(zero)return 0;
        else if(neg&1)return -1;
        else return 1;
    }
};