class Solution {
public:
	int minimumDeviation(vector<int>& nums) {
		priority_queue<int>q;
		int ans = INT_MAX, mn = INT_MAX;
		int mx = INT_MIN;
		for (int n : nums) {
			if (n & 1)n *= 2;
			q.push(n);
			mn = min(mn, n);
		}
		while (1) {
			int tmpMax = q.top();
			q.pop();
			ans = min(ans, tmpMax - mn);
			if (tmpMax & 1)break;
			q.push(tmpMax / 2);
			mn = min(mn, tmpMax / 2);
		}
		return ans;
	}
};
