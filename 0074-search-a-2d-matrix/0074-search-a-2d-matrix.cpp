class Solution {
public:
   bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int start, end, mid;
        for(auto &row: matrix){
            start=0, end=row.size()-1;
            //if(row[start]>target || row[end]<target)
              //  continue;
            while(start<=end){
                mid=(start+end)/2;
                if(row[mid]==target)
                    return true;
                else if(row[mid]>target)
                    end=mid-1;
                else
                    start=mid+1;
            }
        }
        return false;
    }
};