class Solution {
public:
   bool isValid(string s) {
	stack<char>st;
	int n = s.size();
	for (int i = 0; i < n; i++) {
		if (st.empty() || s[i] == '(' || s[i] == '[' || s[i] == '{')st.push(s[i]);
		else {
			if (s[i] == '}' && st.top() == '{')st.pop();
			else if (s[i] == ')' && st.top() == '(')st.pop();
			else if (s[i] == ']' && st.top() == '[')st.pop();
            else st.push(s[i]);
		}
	}
	return st.empty();
}
};