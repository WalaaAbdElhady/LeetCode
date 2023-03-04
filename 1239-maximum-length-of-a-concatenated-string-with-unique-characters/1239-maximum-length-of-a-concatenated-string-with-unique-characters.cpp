class Solution {
private:
    vector<int> frq;
    int ans;
public:
    int maxLength(vector<string>& arr) {
       frq.resize(26,0);
        solve(0, arr);
        return ans;
    }
    void solve(int i, vector<string>& arr) {
        if (i == arr.size()) {
            ans = max(ans, accumulate(frq.begin(), frq.end(), 0));
            return;
        }
        solve(i + 1, arr);
        int idx = 0;
        for (; idx < arr[i].size(); idx++) {
            if (frq[arr[i][idx] - 'a'])break;
            frq[arr[i][idx] - 'a']++;
        }
        if (idx < arr[i].size()) {
            idx--;
            for (; idx >= 0; idx--)
                frq[arr[i][idx] - 'a']--;
            return;
        }
        solve(i + 1, arr);
        for (auto c : arr[i])
            frq[c - 'a']--;
    }
};