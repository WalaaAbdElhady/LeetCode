class Solution {
private:
vector<vector<int>>ans;
vector<int>v;
public:
    void solve(vector<int>& nums,vector<bool>& vis){
        if(v.size()==nums.size()){
            ans.push_back(v);
            return;
        }
        for(int j=0;j<nums.size();j++){
          if(!vis[j]){
             vis[j]=true;
             v.push_back(nums[j]);
             solve(nums,vis);
             v.pop_back();
             vis[j]=false;
          }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool>vis(nums.size());
        solve(nums,vis);
        return ans;
    }
};