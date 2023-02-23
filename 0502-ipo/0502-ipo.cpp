class Solution {
public:
	int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
		vector<pair<int, int>>projects;
		for (int i = 0; i < profits.size(); i++) {
			projects.push_back({ capital[i], profits[i] });
		}
		sort(projects.begin(), projects.end());
		priority_queue<int>maxProfit;
		int idx = 0;
		while (k--) {
			while (idx < projects.size() && projects[idx].first <= w) {
				maxProfit.push(projects[idx++].second);
			}
			if (!maxProfit.empty()) {
				w += maxProfit.top();
				maxProfit.pop();
			}
		}
		return w;
	}
};