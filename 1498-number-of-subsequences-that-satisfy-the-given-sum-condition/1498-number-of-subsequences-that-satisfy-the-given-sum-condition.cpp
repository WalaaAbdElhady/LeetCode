class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
    sort(nums.begin(), nums.end());
    vector<int> tmp(nums.size(), 1);
   int l = 0, r = nums.size()-1, ans = 0,mod = 1e9 + 7;
    for (int i=1;i<nums.size();++i){//1 2 4
      tmp[i]=(tmp[i-1]*2)%mod;
    }
    while(l<=r){
        if(nums[l]+nums[r]<=target){
            ans=((ans%mod)+(tmp[r-l]%mod))%mod;
            l++;
        }
        else r--;
    }
    return ans%mod;
}
};