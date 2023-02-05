class Solution {
public:
    vector<int> findAnagrams(string& s, string& p) {
        vector < int > freq_s(26), freq_p(26);
        for(auto& c : p) freq_p[c - 'a']++;
        vector < int > ans;
        int l = 0, r = 0;
        while(r < s.size()){
            while(r < s.size() && r - l < p.size()) freq_s[s[r++] - 'a']++; 
            if(freq_s == freq_p) ans.push_back(l);
            freq_s[s[l++] - 'a']--;
        }
        return ans;
    }
};