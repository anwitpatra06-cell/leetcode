class Solution {
public:
    char processStr(string s, long long k) {

        int n = s.size();
        vector<long long> len(n);

        long long curr = 0;

        // Step 1: Store lengths
        for (int i = 0; i < n; i++) {

            if (s[i] >= 'a' && s[i] <= 'z') {
                curr++;
            }
            else if (s[i] == '*') {
                if (curr > 0)
                    curr--;
            }
            else if (s[i] == '#') {
                curr *= 2;
            }
            else if (s[i] == '%') {
                // length unchanged
            }

            len[i] = curr;
        }

        // Check k validity
        if (k >= len[n - 1])
            return '.';


        // Step 2: Traverse backwards
        for (int i = n - 1; i >= 0; i--) {

            if (s[i] >= 'a' && s[i] <= 'z') {

                if (len[i] - 1 == k) {
                    return s[i];
                }

            }
            else if (s[i] == '#') {

                long long beforeLen = len[i] / 2;

                if (k >= beforeLen)
                    k -= beforeLen;

            }
            else if (s[i] == '%') {

                k = len[i] - k - 1;

            }
            else if (s[i] == '*') {

                continue;

            }
        }

        return '.';
    }
};