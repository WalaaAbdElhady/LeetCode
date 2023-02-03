class Solution {
public:
    bool detectCapitalUse(string word) {
	int capital = 0;
	for (int i = 0; i < word.size(); i++) {
		if (word[i] >= 'A' && word[i] <= 'Z')capital++;
	}
	if (capital == word.size() || capital == 0)return true;
	if (word[0] >= 'A' && word[0] <= 'Z' && capital == 1)return true;
	return false;
}
};