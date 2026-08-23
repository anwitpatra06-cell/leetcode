class Solution {
public:
    bool sumGame(string num) {
        string s1, s2;
        int p = 0, q = 0;
        int sum1 = 0, sum2 = 0;

        for (int i = 0; i < num.size() / 2; i++) {
            s1.push_back(num[i]);
        }

        for (int i = num.size() / 2; i < num.size(); i++) {
            s2.push_back(num[i]);
        }

        for (int i = 0; i < s1.size(); i++) {
            if (s1[i] != '?') {
                sum1 += s1[i] - '0';
            } else {
                q++;
            }
        }

        for (int i = 0; i < s2.size(); i++) {
            if (s2[i] != '?') {
                sum2 += s2[i] - '0';
            } else {
                p++;
            }
        }

        int diffQ = q - p;
        int diff = sum1 - sum2;

        if (diffQ % 2 != 0)
            return true;

        return diff != -9 * diffQ / 2;
    }
};