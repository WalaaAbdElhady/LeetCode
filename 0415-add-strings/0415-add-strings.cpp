class Solution {
public:
    string addStrings(string num1, string num2) {
        int n = num1.size() - 1, m = num2.size() - 1, carry = 0;
        string ans = "";
        while (n >= 0 && m >= 0) {
            int sum = num1[n] - '0' + num2[m] - '0' + carry;
            carry = sum / 10;
            sum %= 10;
            ans += to_string(sum);
            n--, m--;
        }
        while (n >= 0) {
            int sum = num1[n] - '0' + carry;
            carry = sum / 10;
            sum %= 10;
            ans += to_string(sum);
            n--;
        }
        while (m >= 0) {
            int sum = num2[m] - '0' + carry;
            carry = sum / 10;
            sum %= 10;
            ans += to_string(sum);
            m--;
        }
        if (carry)ans += to_string(carry);
        reverse(ans.begin(), ans.end());
        return ans;
    }
};