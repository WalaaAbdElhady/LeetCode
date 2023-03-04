class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>v;
        for(int i = n / 2; i >= 1; i--){
            v.push_back(-1*i);
        }
        for(int i = 1; i <= n / 2; i++){
            v.push_back(i);
        }
        if(n&1)v.push_back(0);
        return v;
    }
};