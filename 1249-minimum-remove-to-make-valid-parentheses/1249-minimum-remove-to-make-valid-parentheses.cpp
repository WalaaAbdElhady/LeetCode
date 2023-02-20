class Solution {
public:
    string minRemoveToMakeValid(string s) {
	stack<char>st;
	string ans;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] != '(' && s[i] != ')')ans += s[i];
		else {
			if (s[i] == ')' && !st.empty()) {
				st.pop();
				ans += s[i];
			}
			else if (s[i] == '(') {
				ans += s[i];
				st.push(s[i]);
			}
		}
	}
    //cout<<ans;
    //while (!st.empty()){cout<<st.top(); st.pop();}
	while (!st.empty()) {
		for (int i = ans.size() - 1; i >= 0; i--) {//lee(t(c)o)de)
			if (ans[i] == '(' && !st.empty()) {
				ans.erase(ans.begin() + i);
				st.pop();
			}
		}
	}
	return ans;
}
};