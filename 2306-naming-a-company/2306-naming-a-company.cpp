class Solution {
public:
    long long distinctNames(vector<string>& ideas) {
	unordered_map<char, unordered_set<string>>words;
	for (string& s : ideas) {
		words[s[0]].insert(s.substr(1, s.size()));
	}
	long long numberOfValidNames = 0;
	for (auto& c1 : words) {
		for (auto& c2 : words) {
			int intersection = 0;
			if (c1 != c2) {
				for (auto& word : c1.second) {
					if (c2.second.find(word) != c2.second.end()) {
						intersection++;
					}
				}
				int validInC1 = c1.second.size() - intersection;
				int validInC2 = c2.second.size() - intersection;
				numberOfValidNames +=validInC1 * validInC2;
			}
		}
	}
	return numberOfValidNames;
}
};