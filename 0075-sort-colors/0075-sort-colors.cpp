class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l=0,r=nums.size()-1,md=0;
        while(md<=r){
            if(nums[md]==0){
                swap(nums[l],nums[md]);
                md++,l++;
            }
            else if(nums[md]==1)md++;
            else{
                swap(nums[r],nums[md]);
                r--;
            }
        }
    }
};