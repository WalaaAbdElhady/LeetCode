class Solution {
public:
    bool isIsomorphic(string s, string t) {
        vector<char>idxS(128,-1),idxT(128,-1);
        for(int i=0;i<s.size();i++){
            if(idxS[s[i]]!=idxT[t[i]])return false;
            idxS[s[i]]=i;
            idxT[t[i]]=i;
        }
        return true;
    }
};