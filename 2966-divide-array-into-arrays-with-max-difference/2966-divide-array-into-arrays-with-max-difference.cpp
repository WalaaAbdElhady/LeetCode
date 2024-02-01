class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        vector<vector<int>>ans;
        int n=nums.size();
        if(n==1)return ans;
        sort(nums.begin(),nums.end());
        vector<int>tmp,cur;
        int l=nums[0],r=nums[1];
        for(int i=0;i<n;i++){
            if(r-l<=k && (r-nums[i])<=k && tmp.size()<3){
              r=nums[min(i+1,n-1)];
              tmp.push_back(nums[i]);
           }else {
                l=nums[i];
                if(tmp.size()<3)return {};
                ans.push_back(tmp);
                tmp=cur;
                tmp.push_back(nums[i]);
           }
           // cout<<l<<' '<<r<<' '<<nums[i]<<"\n";
        }
        if(tmp.size())ans.push_back(tmp);
        return ans;
}
};