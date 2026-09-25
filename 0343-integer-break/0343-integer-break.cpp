class Solution {
public:
    int integerBreak(int n) {
        int b = n / 3;

        if (n == 2)
            return 1;

        if (n == 3)
            return 2;

        if (n % 3 == 0)
            return pow(3, b);

        if (n % 3 == 1)
            return pow(3, b - 1) * 4;

        return pow(3, b) * 2;
    }
};