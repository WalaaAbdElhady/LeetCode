class Solution {
public:
    double average(vector<int>& salary) {
    int mx = INT_MIN, mn = INT_MAX;
    double average = 0;
    for (int i : salary) mx = max(mx, i);
    for (int i : salary) mn = min(mn, i);
    for (int i : salary) if (i != mn && i != mx)average += i;
    return average /= (salary.size() - 2);
   }
};