class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cnt=0;
        unordered_map<int,int>mp;
        for(int i=1;i<nums.size();i++)nums[i]+=nums[i-1];
        for(int i=0;i<nums.size();i++){
            if(nums[i]==k)cnt++;
            cnt+=mp[nums[i]-k];
            mp[nums[i]]++;
        }
        return cnt;
    }
};