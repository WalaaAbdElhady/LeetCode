class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int>pre(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            if(i)pre[i]=nums[i]+pre[i-1];
            else pre[i]=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            //cout<<pre[i]<<' ';
            if(i==0){
                if((pre[nums.size()-1]-pre[i])==0)return i;
            }
            else if(pre[i-1]==(pre[nums.size()-1]-pre[i]))return i;
        }
        return -1;
    }
};