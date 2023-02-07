class Solution {
public:
    int totalFruit(vector<int>& fruits) {
	map<int, int>baskets;
	int l = 0, r = 0, ans = 0;
	while (l < fruits.size()) {
		while (r < fruits.size() && baskets.size() <= 2) {
            if (baskets.size() == 2 && baskets.find(fruits[r]) == baskets.end())break;
			baskets[fruits[r]]++;
			r++;
		}
		ans = max(ans, r-l);
		baskets[fruits[l]]--;
		if (baskets[fruits[l]] == 0)baskets.erase(fruits[l]);
		l++;
	}
	return ans;
}
};