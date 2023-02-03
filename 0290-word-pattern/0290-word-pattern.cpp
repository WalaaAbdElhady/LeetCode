class Solution {
public:
   bool wordPattern(string pattern, string s) {
    vector<string>words; string a = "";
    s += ' ';
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != ' ')a += s[i];
        else words.push_back(a), a = "";
    }
    if (words.size() != pattern.size())return false;
    map<char, string>mp;
    set<string>st;
    for (int i = 0; i < pattern.size(); i++) {
        if (mp.find(pattern[i]) != mp.end()) {
            if (mp[pattern[i]] != words[i])return false;
        }
        else {
            if (st.count(words[i]))return false;
            mp[pattern[i]] = words[i];
            st.insert(words[i]);
        }
    }
    return true;
}
};