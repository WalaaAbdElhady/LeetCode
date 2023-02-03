class SummaryRanges {
private:
set<int>st;
public:
    SummaryRanges() {
        
    }
    
    void addNum(int value) {
        st.insert(value);
    }
    
    vector<vector<int>> getIntervals() {
        if(st.empty())return {};
        vector<vector<int>>ans;
        int start=-1,end=-1;
        for(auto&num:st){
            if(start==-1){
                start=end=num;
            }
            else if(num==end+1){
              end=num;
            }
            else{
                ans.push_back({start,end});
                 start=end=num;
            }
        }
        ans.push_back({start,end});
        return ans;
    }
};

/**
 * Your SummaryRanges object will be instantiated and called as such:
 * SummaryRanges* obj = new SummaryRanges();
 * obj->addNum(value);
 * vector<vector<int>> param_2 = obj->getIntervals();
 */