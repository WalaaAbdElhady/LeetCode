class Solution {
public:
    double angleClock(int h, int m) {
        double hourAngle = (60 * h + m) * 0.5;
        double minuteAngle = m * 6;
        double ans = abs(hourAngle - minuteAngle);
        return (ans <= 180.0) ?ans :360.0 - ans;
    }
};