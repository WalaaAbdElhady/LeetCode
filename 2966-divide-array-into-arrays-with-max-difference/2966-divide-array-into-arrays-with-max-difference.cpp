class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>>ans;
        int n=nums.size();
        if(n==1)return ans;
        sort(nums.begin(),nums.end());
        //Divide the array into one or more arrays of size 3
        for(int i=0;i<n;i+=3){
           if(nums[i+2]-nums[i]>k)return {};
            ans.push_back({nums[i],nums[i+1],nums[i+2]});
        }
        
        return ans;
}
};