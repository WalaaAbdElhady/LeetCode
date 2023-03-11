class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_map<char,int>mp;
        for(int i=0;i<sentence.size();i++)mp[sentence[i]]++;
        for(int i=0;i<26;i++){
            if(mp[char(i+'a')]==0)return false;
        }
        return true;
    }
};