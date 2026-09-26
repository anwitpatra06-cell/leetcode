class Solution {
public:
    double angleClock(int hour, int minutes) {
        double a = minutes * 6;
        double b = hour * 30 + minutes * 0.5;

        double angle = abs(a - b);

        if (angle < 180) {
            return angle;
        }
        else {
            return 360 - angle;
        }
    }
};