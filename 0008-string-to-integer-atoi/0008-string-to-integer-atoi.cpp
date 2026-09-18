class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        int i = 0;

        // 1. Skip leading spaces
        while (i < n && s[i] == ' ') {
            i++;
        }

        // 2. Check sign
        bool positive = true;

        if (i < n && s[i] == '-') {
            positive = false;
            i++;
        }
        else if (i < n && s[i] == '+') {
            i++;
        }

        // 3. Read digits
        long long num = 0;

        while (i < n && s[i] >= '0' && s[i] <= '9') {
            num = num * 10 + (s[i] - '0');

            // 4. Check overflow
            if (positive && num > 2147483647) {
                return 2147483647;
            }

            if (!positive && num > 2147483648LL) {
                return -2147483648LL;
            }

            i++;
        }

        // 5. Apply sign
        if (positive) {
            return (int)num;
        }
        else {
            return (int)-num;
        }
    }
};