class Solution {
public:
    string addBinary(string a, string b) {
        int n = a.size(), m = b.size(), tmpA = 0, tmpB = 0, carry = 0;
        int maxSz = max(n, m);
        string ans;
        for (int i = 0; i < maxSz; i++) {
            if (i < n)tmpA = a[n - i - 1] - '0';
            else tmpA = 0;
            if (i < m)tmpB = b[m - i - 1] - '0';
            else tmpB = 0;
            int total = tmpA + tmpB + carry;
            carry = total / 2;
            char sum = (total % 2) + '0';
            ans.insert(0, 1, sum);
        }
        if (carry)ans.insert(0, 1, '1');
        return ans;
    }
};