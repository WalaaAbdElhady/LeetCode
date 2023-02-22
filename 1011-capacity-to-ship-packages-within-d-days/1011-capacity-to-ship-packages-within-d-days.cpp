class Solution {
public:
	int shipWithinDays(vector<int>& weights, int days) {
		int total = 0;
		for (int weight : weights) {
			total += weight;
		}
		int l = 1, r = total, ans = -1;
		while (l <= r) {
			int md = l + (r - l) / 2;
			if (valid(md, days, weights))r = md - 1, ans = md;
			else l = md + 1;
		}
		return ans;
	}
	bool valid(int md, int days, vector<int>& weights) {
		int sum = 0, cnt = 1;
		for (int weight : weights) {
            if(weight > md)return false;
			if (sum + weight <= md)sum += weight;
			else sum = weight,cnt++;
		}
		return cnt <= days;
	}
};