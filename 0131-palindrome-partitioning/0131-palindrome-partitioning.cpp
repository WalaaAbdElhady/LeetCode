class Solution {
private:
vector<vector<string>>ans;
vector<string>v;
public:
    vector<vector<string>> partition(string s) {
	solve(0, s);
	return ans;
}
void solve(int l,string s) {
	if (l == s.size()) {
		ans.push_back(v);
		return;
	}
	for (int r = l; r < s.size(); r++) {
		if (isPal(l, r, s)) {
			v.push_back(s.substr(l, r - l + 1));
			solve(r + 1, s);
			v.pop_back();
		}
	}
}
bool isPal(int l, int r, string& s) {
	while (l < r) {
		if (s[l] != s[r])return false;
		l++, r--;
	}
	return true;
}

};