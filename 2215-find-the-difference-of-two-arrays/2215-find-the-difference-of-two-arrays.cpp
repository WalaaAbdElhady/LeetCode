class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int>frq1,frq2;
        vector<int>tmp1,tmp2;
        for(int n:nums1)frq1.insert(n);
        for(int n:nums2)frq2.insert(n);
        
        for(int n:frq1){
            if(!frq2.count(n))tmp1.push_back(n);
        }
        for(int n:frq2){
            if(!frq1.count(n))tmp2.push_back(n);
        }
       return {tmp1,tmp2};   
    }
};