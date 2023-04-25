class SmallestInfiniteSet {
    set<int>st;
    int cur;
public:
    SmallestInfiniteSet() {
        cur=1;
    }
    
    int popSmallest() {
        int ans = 0;
        if(!st.empty()){
            ans=*st.begin();
            st.erase(st.begin());
        }
        else{
            ans=cur;
            cur++;
        }
        return ans;
    }
    
    void addBack(int num) {
        if(st.find(num)!=st.end() || cur<=num)return;
        st.insert(num);
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */