class Solution {
public:
    int produc(int n) {
        int p = 1;
        while (n != 0) {
            p = p * (n % 10);
            n = n / 10;
        }
        return p;
    }
    int smallestNumber(int n, int t) {
        while (true) {
            if (produc(n) % t == 0) {
                return n;
                break;
            }
            n++;
        }
        return n;
    }
};