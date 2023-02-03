public class Solution {
    public string Convert(string s, int numRows) {
        if (numRows == 1)return s;
        string ans = "";
        for (int r = 0; r < numRows; r++) {
            int idx = 2 * (numRows - 1);
            for (int j = r; j < s.Length; j += idx) {
                ans += s[j];
                if (r != 0 && r != numRows - 1 && j + idx - 2 * r < s.Length)
                    ans += s[j + idx - 2 * r];
            }
        }
    return ans;
    }
}