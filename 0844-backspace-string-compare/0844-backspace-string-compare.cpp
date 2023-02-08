class Solution {
public:
    bool backspaceCompare(string s, string t) {
        return afterBackspace(s)==afterBackspace(t);
    }
    string afterBackspace(string s){
        string ans="";
        for(int i=0;i<s.size();i++){
            if(s[i]!='#')ans+=s[i];
            else {
                if(ans.size())
                ans.pop_back();
            }
        }
        return ans;
    }
};