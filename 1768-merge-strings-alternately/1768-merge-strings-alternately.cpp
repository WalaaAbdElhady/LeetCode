class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0,j=0,t=0;
        string ans="";
        while(i<word1.size() && j<word2.size()){
            if(t&1 && j<word2.size())ans+=word2[j++];
            if(!(t&1) && i<word1.size())ans+=word1[i++];
            t++;
        }
        while(i<word1.size())ans+=word1[i++];
        while(j<word2.size())ans+=word2[j++];
        return ans;
    }
};