class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size(),idx=n-1,len=0;
        while(idx>=0 && s[idx]==' ')idx--;
        while(idx>=0 && s[idx--]!=' ')len++;
        return len;
    }
};