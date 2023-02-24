class Solution {
private:
    vector<string>ans;
public:
    vector<string> letterCasePermutation(string s) {
        solve(s,0);
        return ans;
    }
    char change(char c) {
        if (islower(c))return towupper(c);
        else return towlower(c);
    }
    void solve(string& s,int i) {
        ans.push_back(s);
        for (int j = i; j < s.size(); j++) {
            if (isalpha(s[j])) {
                s[j] = change(s[j]);
                solve(s, j + 1);
                s[j] = change(s[j]);
            }
        }
    }
};