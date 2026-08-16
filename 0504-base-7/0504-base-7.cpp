class Solution {
public:
    string convertToBase7(int num) {
        if (num == 0) return "0";

        bool neg = num < 0;
        num = abs(num);

        string s = "";

        while (num != 0) {
            s += char('0' + (num % 7));
            num /= 7;
        }

        if (neg)
            s += '-';

        reverse(s.begin(), s.end());

        return s;
    }
};