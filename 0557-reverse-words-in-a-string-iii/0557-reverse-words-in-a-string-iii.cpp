class Solution {
public:
    string reverseWords(string s) {
    int l = 0, r = 0, n = s.size();
    while (l < n) {
        r = l;
        while (r < n && s[r] != ' ')r++;
        int tmp = r - 1;
        while (l < tmp) {
            swap(s[l++], s[tmp--]);
        }
        l = r + 1;
    }
    return s;
}
};