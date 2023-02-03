class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int>frq;
        bool ok=true;
        int ans=0;
        for(int i=0;i<s.size();i++)frq[s[i]]++;
        for(auto&it:frq){
           // cout<<it.second<<' ';
           if(it.second%2==0)ans+=it.second;
           else {
              ans+=it.second-1;
              ok=false;
           }
        }
        if(!ok)ans++;
        return ans;
    }
};