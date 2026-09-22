class Solution {
public:
    int rotatedDigits(int n) {
        int cnt = 0;
        for (int i = 1; i <= n; i++) {
            
            bool im = true;
            bool pos = false;
            int num = i;
            while (num != 0) {
                int digit = num % 10;
                if (digit == 3 || digit == 4 || digit == 7) {
                    im = false;
                    break;
                }
                if (digit == 2 || digit == 5 || digit == 6 || digit == 9) {
                    pos = true;
                }
                num /= 10;
            }
            if (im && pos) {
                cnt++;
            }
        }
        return cnt;
    }
};