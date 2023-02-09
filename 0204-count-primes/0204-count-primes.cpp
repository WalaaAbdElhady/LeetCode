class Solution {
private:
    vector<bool>isPrime;
    vector<int>ans;
public:
    int countPrimes(int n) {
	    seive(n);
        return ans.size();
    }
    void seive(int n) {
        isPrime = vector<bool>(n + 1, true);
        isPrime[0] = isPrime[1] = false;
        for (int i = 4; i < n; i += 2) {
            isPrime[i] = false;
        }
        for (int i = 3; i * i < n; i += 2) {
            if (isPrime[i]) {
                for (int j = i * i; j < n; j += 2 * i) {
                    isPrime[j] = false;
                }
            }
        }
        for (int i = 2; i < n; i++) {
            if (isPrime[i])ans.push_back(i);
        }
  }
};