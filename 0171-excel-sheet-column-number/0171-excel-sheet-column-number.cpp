class Solution {
public:
    int titleToNumber(string s) {
	int ans = 0;
	for (int i = 0; i < s.size(); i++) {
		int digit = s[i] - 'A' + 1;
		ans = ans * 26 + digit;
	}
	return ans;
   }
};