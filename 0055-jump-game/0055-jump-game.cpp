class Solution {
public:
    bool canJump(vector<int>& nums) {
        int jump=0;
        for(int i=0;i<nums.size();i++){
            jump=max(jump,i+nums[i]);
            if(jump<i+1)break;
        }
        return jump>=nums.size()-1;
    }
};