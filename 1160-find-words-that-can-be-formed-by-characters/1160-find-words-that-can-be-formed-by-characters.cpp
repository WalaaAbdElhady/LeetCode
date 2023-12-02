class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        string tmp=chars;
        vector<int>frq1(26,0),frq2;
        int cnt=0,ans=0;
        for(char c:chars)frq1[c-'a']++;
        for(string s: words){
            frq2=frq1;
            cnt=0;
            for(int i=0;i<s.size();i++){
                if(frq2[s[i]-'a'])frq2[s[i]-'a']--,cnt++;
            }
            if(cnt==s.size())ans+=cnt;
        }
        return ans;
    }
};