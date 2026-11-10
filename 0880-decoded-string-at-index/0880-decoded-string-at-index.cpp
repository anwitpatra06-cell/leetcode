class Solution {
public:
    string decodeAtIndex(string s, int k) {
        long long len = 0;

        // Calculate decoded string length
        for(int i = 0; i < s.size(); i++) {
            if(isdigit(s[i])) {
                len *= (s[i] - '0');
            }
            else {
                len++;
            }
        }

        // Work backwards
        for(int i = s.size()-1; i >= 0; i--) {

            k = k % len;

            if(k == 0 && isalpha(s[i])) {
                return string(1, s[i]);
            }

            if(isdigit(s[i])) {
                len /= (s[i] - '0');
            }
            else {
                len--;
            }
        }

        return "";
    }
};