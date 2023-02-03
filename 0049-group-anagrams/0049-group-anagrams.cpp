class Solution {//O(m*n)
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        map<string, vector<string>> mp;
        for(string s: strs){
           // cout<<getKey(s)<<'\n';
            mp[getKey(s)].push_back(s);
        }
        for(auto&it:mp){
            ans.push_back(it.second);
        }
        return ans;
    }
private:
    string getKey(string s){
        vector<int>frq(26);
        for(int i=0;i<s.size();i++)frq[s[i]-'a']++;
        string ans="";
        for(int i=0;i<26;i++){
            ans+=to_string(frq[i]+'a');
        }
        return ans;
    }
};