class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
	vector<char>mp(26);
	for (int i = 0; i < 26; i++)mp[order[i] - 'a'] = i + 'a';
	for (string& s : words) {
		for (char& ch : s) {
			ch = mp[ch - 'a'];
		}
	}
	auto tmp = words;
	sort(words.begin(), words.end());
	return words == tmp;
}
};