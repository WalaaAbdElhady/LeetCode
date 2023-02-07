class Solution {
public:
   int evalRPN(vector<string>& tokens) {
	stack<int>ans;
	for (string s : tokens) {
		if (s == "+" || s == "-" || s == "*" || s == "/") {
			int tmp1 = ans.top(); ans.pop();
			int tmp2 = ans.top(); ans.pop();
			switch (s[0]) {
			case '+':
				ans.push(tmp2 + tmp1);
				break;
			case '-':
				ans.push(tmp2 - tmp1);
				break;
			case '*':
				ans.push(tmp2 * tmp1);
				break;
			case '/':
				ans.push(tmp2 / tmp1);
				break;
			}
		}
		else ans.push(stoi(s));
	}
	return ans.top();
}

};