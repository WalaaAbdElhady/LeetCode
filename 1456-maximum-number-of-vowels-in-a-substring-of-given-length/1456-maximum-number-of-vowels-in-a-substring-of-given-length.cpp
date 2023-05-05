class Solution {
public:
    int maxVowels(string s, int k) {
        int ans=0,cnt=0;
        for(int i=0;i<k;i++){
            if(check(s[i]))cnt++;
        }
        ans=max(ans,cnt);
        for(int i=k;i<s.size();i++){
            if(check(s[i-k]))cnt--;
            if(check(s[i]))cnt++;
            ans=max(ans,cnt);
        }
        return ans;
    }
    bool check(char c){
        return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    }
};