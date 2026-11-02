class Solution {
public:
    bool sym(int x) {
        int temp = x;
        int sum = 0, tsum = 0, c = 0;

        while (temp != 0) {
            c++;
            temp /= 10;
        }

        if (c % 2 != 0) {
            return false;
        }

        temp = x;

        for (int i = 0; i < c / 2; i++) {
            sum += temp % 10;
            temp /= 10;
        }

        for (int i = 0; i < c / 2; i++) {
            tsum += temp % 10;
            temp /= 10;
        }

        return sum == tsum;
    }

    int countSymmetricIntegers(int low, int high) {
        int cnt = 0;

        for (int i = low; i <= high; i++) {
            if (sym(i)) {
                cnt++;
            }
        }

        return cnt;
    }
};