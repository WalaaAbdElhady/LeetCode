class Solution {
public:
  bool checkInclusion(string s1, string s2) {
	int n = s1.size(), m = s2.size();
	if (m < n)return false;
	vector<int>frq1(26, 0), frq2(26, 0), frq3(26, 0);
    for (int i = 0; i < n; i++) frq1[s1[i] - 'a']++;

	for (int i = 0; i <= m-n; i++) {
		for (int j = i; j < i + n; j++) {
			frq2[s2[j]-'a']++;
		}
		if (frq1 == frq2)return true;
		frq2 = frq3;
	}
	return false;
}

};