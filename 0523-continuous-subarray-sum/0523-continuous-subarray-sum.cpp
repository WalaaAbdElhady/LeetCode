class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0] = 0;
        for(int i = 1; i < nums.size(); i++)nums[i] += nums[i-1];
        for(int i = 0; i < nums.size(); i++){
           if(mp.find(nums[i] % k) == mp.end()){
               mp[nums[i] % k] = i + 1 ;
           }
           else if(mp[nums[i] % k] < i)return true;
        }
        return false;
    }
};