class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char,int>frq;
        set<int>st;
        for(int i=0;i<s.size();i++)frq[s[i]]++;
        int cnt=0;
        for(auto&it:frq){
            while(st.find(it.second)!=st.end()){
                it.second--;
                cnt++;
            }
            if(it.second)
            st.insert(it.second);
        }
        return cnt;
    }
};