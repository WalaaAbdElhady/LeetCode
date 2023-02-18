class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string,int> mp;
        vector<string>ans;
        for(int i=0;i<=(int)s.size()-10;i++){
            string tmp=s.substr(i,10);
            mp[tmp]++;
        }
        for(auto&it:mp){
            if(it.second>1)ans.push_back(it.first);
        }
        return ans;
    }
};