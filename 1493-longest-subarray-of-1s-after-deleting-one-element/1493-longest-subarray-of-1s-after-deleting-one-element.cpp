class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int l=0,r=0,n=nums.size(),ans=0,cnt=0,ok=0;
        while(r<n){
            if(!nums[r])cnt++;
            while(cnt>1){
                if(!nums[l])cnt--;
                l++;
            }
            ans=max(ans,r-l);
            r++;
        }
        return ans;
    }
};