class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size(),m = needle.size(),cnt=0;
        for(int i = 0; i <=n-m; i++){
            cnt = 0; 
            for(int j=0;j<m;j++){
             if(haystack[i+j] == needle[j])cnt++;
            }
            if(cnt==m)return i;
        }
        return -1;
    }
};