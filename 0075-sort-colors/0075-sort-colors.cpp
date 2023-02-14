class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size()-1;j++){
                if(nums[j] > nums[j+1]){
                   int tmp=nums[j];
                   nums[j]=nums[j+1];
                   nums[j+1]=tmp;
                }
            }
        }
    }
};