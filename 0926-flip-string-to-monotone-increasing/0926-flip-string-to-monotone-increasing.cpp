class Solution {
public:
   int minFlipsMonoIncr(string S) {
	int cntOne = 0, cntZero = 0;
	for (int i = 0; i < S.size(); i++) {
		if (S[i] == '1')cntOne++;
		else cntZero++;
		cntZero = min(cntZero, cntOne);
	}
	return cntZero;
}
};