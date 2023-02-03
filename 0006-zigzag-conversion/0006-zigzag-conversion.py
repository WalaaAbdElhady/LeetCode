class Solution(object):
    def convert(self, s, numRows):
        if numRows == 1: return s
        ans = ""
        for r in range(numRows):
            idx = 2 * (numRows - 1)
            for j in range(r, len(s), idx):
                ans += s[j]
                if r != 0 and r != numRows - 1 and j + idx - 2 * r < len(s):
                    ans += s[j + idx - 2 * r]

        return ans
  