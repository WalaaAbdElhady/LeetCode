class Solution {
public:
    long long countSubarrays(vector<int>& nums, int minK, int maxK) {
        long long mnidx=-1,mxidx=-1,idx=-1,cnt=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<minK || nums[i]>maxK){
                mnidx=mxidx=-1,idx=i;
            }
            else{
                if(nums[i]==minK)mnidx=i;
                if(nums[i]==maxK)mxidx=i;
                if(mnidx!=-1 && mxidx!=-1){
                    cnt+=min(mnidx,mxidx)-idx;
                }
            }
        }
        return cnt;
    }
};