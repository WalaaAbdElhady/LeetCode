class Solution {
public:
    string longestPalindrome(string s) {
    int mx = 0, ansL = 0, ansR = 0;
    for (int i = 0; i < s.size(); i++) {
        // for Odd Palindrome
        int l = i, r = i;
        while (l >= 0 && r < s.size() && s[l] == s[r]) {
            if (mx < (r - l + 1)) {
                mx = (r - l + 1);
                ansL = l, ansR = r;
            }
            l--, r++;
        }
        // for Even Palindrome
        l = i, r = i + 1;
        while (l >= 0 && r < s.size() && s[l] == s[r]) {
            if (mx < (r - l + 1)) {
                mx = (r - l + 1);
                ansL = l, ansR = r;
            }
            l--, r++;
        }
    }
    return s.substr(ansL, (ansR - ansL + 1));
}
};