class Solution {
public:
   string minWindow(string s, string t) {
	map<char, int>frq;
	for (int i = 0; i < t.size(); i++)frq[t[i]]++;
	int l = 0, r = 0, ans = INT_MAX, cnt = 0, ansL = 0, ansR = 0;
	while (l <= r) {
		while (r < s.size() && cnt < t.size()) {//ADOBECODEBANC
			if (frq[s[r]] > 0)cnt++;
			frq[s[r]]--;
			r++;
		}
		//if(cnt==t.size())
		//cout << l << ' ' << r <<' '<<cnt<< "\n";
		if (cnt == t.size()) {
			if (ans > r - l + 1) {
				ans = r - l + 1;
				ansL = l, ansR = r;
			}
		}
		frq[s[l]]++;
		if (frq[s[l]] > 0)cnt--;
		l++;
	}
	string a = "";
	for (int i = ansL; i < ansR; i++)a += s[i];
	return a;
}
};