class Solution {
public:
    int countMonobit(int n) {
        int count = 0;

        // 0 is a Monobit integer
        count++;

        // Numbers consisting only of 1s:
        // 1, 3, 7, 15, 31, ...
        long long x = 1;

        while (x <= n) {
            count++;
            x = x * 2 + 1;
        }

        return count;
    }
};