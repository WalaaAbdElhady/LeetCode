class Solution {
public:
    string frequencySort(string s) {
        vector<pair<int,char>>v;
        map<char,int>mp;
        for(char c:s)mp[c]++;
        for(auto it:mp)v.push_back({it.second,it.first});
        sort(v.rbegin(),v.rend());
        string ans="";
        for(auto i:v){
            for(int j=0;j<i.first;j++){
                ans+= i.second;
            }
        }
        return ans;
    }
};