class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l = 0,r = nums.size() - 1;//1 1 3 3 5
        while(l <= r){
            int md = l + (r - l) / 2;
            if((md - 1 < 0 || nums[md] != nums[md - 1]) && (md + 1 >= nums.size() || nums[md] != nums[md + 1]))
                return nums[md];
            int leftSize = (nums[md] == nums[md - 1]) ? md - 1 : md;
            if(leftSize & 1)r = md - 1;
            else l = md + 1;
        }
        return -1;
    }
};