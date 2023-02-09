class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string s1=strs[0],s2=strs[strs.size()-1],ans="";
        for(int i=0,j=0;i<s1.size()&& j<s2.size();i++,j++){
            if(s1[i]==s2[j])ans+=s1[i];
            else break;
        }
        return ans;
    }
};