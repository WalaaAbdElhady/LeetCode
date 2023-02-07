 class Solution {
public:
    bool isPalindrome(string s) {
    string after = "";
    for (int i = 0; i < s.size(); i++) {
        if (isalpha(s[i])) {
            s[i] = towlower(s[i]);
            after += s[i];
        }
        else if (isdigit(s[i])) {
            after += s[i];
        }
    }
    //cout << after;
    int n = after.size();
    for (int i = 0; i < n / 2; i++) {
        if (after[i] != after[n - i - 1])return false;
    }
    return true;
}
};