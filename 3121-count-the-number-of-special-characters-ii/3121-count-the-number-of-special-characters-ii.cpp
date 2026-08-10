class Solution {
public:
    int numberOfSpecialChars(string word) {
        bool lc[26] = {};
        bool uc[26] = {};

        for(char c : word) {
            if(c >= 'a' && c <= 'z') {
                int x = c - 'a';

                // lowercase appears after uppercase -> invalid
                if(uc[x])
                    lc[x] = false;
                else
                    lc[x] = true;
            }
            else {
                int x = c - 'A';
                uc[x] = true;
            }
        }

        int ans = 0;

        for(int i = 0; i < 26; i++) {
            if(lc[i] && uc[i])
                ans++;
        }

        return ans;
    }
};