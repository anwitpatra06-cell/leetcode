class Solution {
public:
    int minRotations(string s) {
        int sum = 0;
        int n = s.size();

        // Initial pointer is at 0
        sum += min(abs(s[0] - '0'), 10 - abs(s[0] - '0'));

        for (int i = 0; i < n - 1; i++) {
            int diff = abs(s[i + 1] - s[i]);
            sum += min(diff, 10 - diff);
        }

        return sum;
    }
};