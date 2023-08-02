class Solution {
    vector<int>tmp;
    vector<vector<int>>ans;
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool>vis(nums.size());
        solve(nums,vis);
        return ans;
    }
    void solve(vector<int>& nums,vector<bool>& vis){
        if(tmp.size()==nums.size()){
            ans.push_back(tmp);
            return;
        }
        for(int j=0;j<nums.size();j++){
            if(!vis[j]){
                vis[j]=true;
                tmp.push_back(nums[j]);
                solve(nums,vis);
                vis[j]=false;
                tmp.pop_back();
            }
        }
    }
};
