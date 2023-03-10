class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int l=0,r=arr.size()-1;
        while(l<=r){
            int md=l+(r-l)/2;
            if(arr[md]-1-md<k)l=md+1;
            else r=md-1;
        }
        return l+k;
    }
};