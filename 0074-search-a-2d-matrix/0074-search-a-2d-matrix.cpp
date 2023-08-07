class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix.size(),c=matrix[0].size();
        for(int i=0;i<r;i++){
            int st=0,ed=c-1;
            while(st<=ed){
                int md=(st+ed)/2;
                if(matrix[i][md]==target)return true;
                else if(matrix[i][md]<target)st=md+1;
                else ed=md-1;
            }
        }
        return false;
    }
};