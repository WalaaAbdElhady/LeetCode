class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int>ans;
        int frq[26] = {};
        for (int i = 0; i < s.size(); i++)frq[s[i] - 'a'] = i;
        int mxIdx = 0, st = 0;
        for (int i = 0; i < s.size(); i++) {
            mxIdx = max(mxIdx, frq[s[i] - 'a']);
            if (i == mxIdx) {
                ans.push_back(i - st + 1);
                st = mxIdx + 1;
            }
        }
        return ans;
    }
};