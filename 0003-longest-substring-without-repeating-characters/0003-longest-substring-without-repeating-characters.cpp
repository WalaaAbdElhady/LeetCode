class Solution {
public:
int frq[10001];
int lengthOfLongestSubstring(string s) {
    if (s == " ")return 1;
    int l = 0, r = 0, ans = 0;
    while (l < s.size()) {
        while (r < s.size() && frq[s[r]] == 0) {
            frq[s[r]]++;
            r++;
        }
        //cout << l << ' ' << r-1 <<' '<< r - l-1 << "\n";
        ans = max(ans, r - l);
        if (frq[s[l]])frq[s[l]]--;
        l++;
    }
    return ans;
}
};