class Solution {
public:
   int romanToInt(string s) {
	unordered_map<char, int> tmp = { {'I',1 },{'V',5 },{'X',10 },{'L',50 },
	{'C',100 },{'D',500 },{'M',1000} };
	int ans = 0;
	for (int i = 0; i < s.size(); i++) {
		if (i < s.size() && tmp[s[i]] < tmp[s[i + 1]])ans -= tmp[s[i]];
		else ans += tmp[s[i]];
	}
	return ans;
}
};