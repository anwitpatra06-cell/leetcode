class Solution {
public:
    string toBinary(int n) {
        string ans;

        while (n > 0) {
            ans += (n % 2) + '0';
            n /= 2;
        }

        reverse(ans.begin(), ans.end());

        while (ans.size() < 8) {
            ans = '0' + ans;
        }

        return ans;
    }
    bool isPalindromic(string s) {
        string check;

        for (int i = 0; i < s.size(); i++) {
            check += (toBinary(int(s[i])));
        }
        int st = 0;
        int end = check.size() - 1;
        while (st < end) {
            if (check[st] != check[end]) {
                return false;
            }
            st++;
            end--;
        }
        return true;
    }
};