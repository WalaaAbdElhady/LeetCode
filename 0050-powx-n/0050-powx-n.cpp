class Solution {
public:
    double myPow(double x, int n) {
	if (n == 0)return 1;
	if (n == 1)return x;
	double ans = myPow(x, abs(n / 2));
	ans *= ans;
	if (n & 1)ans *= x;
    if(n>=0)return ans;
    return 1.0/ans;
}
};