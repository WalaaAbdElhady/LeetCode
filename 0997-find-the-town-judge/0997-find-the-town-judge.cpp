class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
    if(n==1 && trust.size()==0)return 1;
	vector<int>v(n+1,0);
	for (vector<int> i : trust) {
		v[i[0]]--,v[i[1]]++;
	}
	for (int i=0;i<v.size();i++) {
		if (v[i] == n - 1)return i;
	}
	return -1;
}
};