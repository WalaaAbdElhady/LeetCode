class Solution {
    
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        if(nums.size()<3)return 0;
        int prev=nums[1]-nums[0],diff=0,cnt=0,ans=0;
        for(int i=2;i<nums.size();i++){
            diff=nums[i]-nums[i-1];
            if(diff==prev)cnt++;
            else{
                cnt=0;
                prev=diff;
            }
            ans+=cnt;
        }
        return ans;
    }
};