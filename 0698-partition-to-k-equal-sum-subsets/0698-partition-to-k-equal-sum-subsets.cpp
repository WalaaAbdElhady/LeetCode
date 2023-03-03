class Solution {
private:
    bool vis[100];
    bool ans ;
public:
    bool canPartitionKSubsets(vector<int>& nums, int k) {
        int sum = 0;
        for(int i = 0; i < nums.size(); i++)sum += nums[i];
        if(sum % k != 0 || nums.size() < k)return false;
        sort(nums.rbegin(),nums.rend());
        solve(0, 0, k, sum/k, nums);
        return ans;
    }
    void solve(int i,int curSum, int k, int target,vector<int>& nums){
       if(k == 1){
           ans = true;
           return;
       }
        if(i == nums.size()|| curSum > target)return;
        if(curSum == target){
           solve(0, 0, k - 1, target, nums);
           return;
        }
        if(!vis[i]){
            vis[i] = true;
            solve(i + 1, curSum + nums[i], k, target, nums);
            vis[i] = false;
        }
        solve(i + 1, curSum, k, target, nums);
    }
};